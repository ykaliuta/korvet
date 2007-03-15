/*
 * AUTHOR: Sergey Erokhin                 esl@pisem.net,pk8020@gmail.com
 * &Korvet Team                                              2000...2005
 * ETALON Korvet Emulator                         http://pk8020.narod.ru
 * ---------------------------------------------------------------------
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111, USA.
 *
 */
#include "korvet.h"

#ifdef DBG
 #include <allegro.h>
#endif

#define PIC_DEBUG

#define PICMODE_V 0                     //������� ��������
#define PICMODE_A 1                     //����� ����������� �
#define PICMODE_B 2                     //                  �
#define PICMODE_S 3                     //���� ������������
#define PICMODE_P 4                     //����������������

void InitPIC(void);                     // ������������� ��� ������
byte RdPIC  (int Addr);                 // ������ �� ���
void WrPIC  (int Addr,byte Value);      // ������ � ���
void ShowPIC(void);                     // �������� ���������
void IntRequest(int IntNum);            // ������ �� ����������.
int DoPIC  (void);                      // ��������� ��������.

//extern In_DBG;                          // =1 ������ � ���������
int    picOldScrMode=0;                 // =0 ���� ������������ ���������

int    IRR;                             // ������� ��������
int    ISR;                             // ������� ���������
int    IMR;                             // ������� ������������ OCW A0=1
int    picRUS;                          // ������� ����������� ����.
int    picHIGH;                         // ������� ���� ������

int    LastInt;                         // ��������� ����������.
int    picPRG;                          // ���� ������ ����������������.
int    picMODE;                         // ����� ������

int    picSMM;                          // ���� ������ ����������������
int    picReadSR;                       // ��� �������� �� A0=0
int    picOPROS;                        // ���� ������ ������

int    picLowINT;                       // ���������� � ���������� �����������

byte   FindBitTable[9][0x100];

/**************************************************************************
** ����� ������� ��� � ������ ����������
** ret: 0-7 if found, 8 if not
**************************************************************************/

int FindMaxBit_Ini(int SR)
//int FindMaxBit(int SR)
{
 int cnt=8;
 int realint=(picLowINT+1)&0x07;
 byte mask=1<<realint;

 while (cnt--) {
   if (SR & mask) return realint;
   mask<<=1;
   realint++;
   if (!mask) {
     mask=0x01;
     realint=0;
   }
 }
 return 8;              // ��� ����
}

void InitMaxBit(void) {
 int i,j,t;
 t=picLowINT;
  for (i=0;i<8;i++) {
     picLowINT=i;
     for (j=0;j<0x100;j++) FindBitTable[i][j]=FindMaxBit_Ini(j);
  }
 picLowINT=t;
}

int FindMaxBit(int SR) {
//  return FindBitTable[(picLowINT+1)&0x07][SR];
  return FindBitTable[picLowINT][SR];
//    return FindMaxBit_Ini(SR);
}


void PIC_init(void)
{
 picOldScrMode=0;                 // =0 ���� ������������ ���������

 IRR=0;                           // ������� ��������
 ISR=0;                           // ������� ���������
 IMR=0xff;                           // ������� ������������ OCW A0=1
 picRUS=0;                        // �������� ����������� ����.
 picHIGH=0;
 picMODE=PICMODE_V;

 picPRG=0;                        // ���� ������ ����������������.
 picSMM=0;                        // ���� ������ ����������������
 picReadSR=0;                     // ��� �������� �� A0=0
 picOPROS=0;                      // ���� ������ ������
 picLowINT=7;                     // ���������� � ���������� �����������
 InitMaxBit();
}


void PIC_Write(int Addr,byte Value)
{
 static int SlavePrg=0;
 int i,j;

 switch (Addr&1) {
   case 0: {
        if (Value & 0x10) {                     // ICW ����� ����������������
          picPRG=1;
          picMODE=PICMODE_P;
          picRUS=Value;

          picLowINT=7;
          picOPROS=0;
          picReadSR=0;
          IMR=0;
          ISR=0;               // ??????????????????? 2002-12-20 debug Popkorn

          if (!(Value & 0x02)) SlavePrg=2;
        } else                                 // OCW
        if (Value & 0x08) {                         // ���� ������ (OCW3)
          if (Value & 0x40) {                       // ����� ����������������
            picSMM=(Value & 0x20)?1:0;
          }
          if (Value & 0x02) {                       // ����� ������ SR
            picReadSR=(Value & 0x01)?0:1;           // IRR:ISR
          }
          if (Value & 0x04) {                       // ����� ������
            picOPROS=1;
          }
        } else {                                    // ��������� INT (OCW2)
         switch ((Value >> 5) & 0x07)
           {
            case 0:                         // NOP ��� 8059
            case 2:
            case 4: {break;}

            case 1: {                        // ENDINT, ������� � ����� ������� ��������
                                             // ����� ������� � �������� �����������

                  i=FindMaxBit(ISR);
                  if (i != 8) {              // ������� ��� � ISR
                   ISR&=~(1<<i);
                  }
                  picLowINT=7;
                  picMODE=PICMODE_V;
                  break;
            }
            case 3: {                        // SPECENDINT, ������� � ����� ������� ��������
                                             // ����� ������� � ����� 0-2
                  ISR&=~(1<<(Value&7));
                  picLowINT=7;
                  picMODE=PICMODE_V;
                  break;
            }
            case 5: {                        // ENDINT, ������� � ����� ������ ����������� �
                                             // ����� ���������� ���� 0-2
                  i=FindMaxBit(ISR);
                  if (i != 8) {              // ������� ��� � ISR
                   ISR&=~(1<<i);
                   picLowINT=i;
                  }
                  picMODE=PICMODE_A;
                  break;
            }
            case 6: {                        // ������� � ����� ������ ����������� �
                  picLowINT=Value&7;
                  picMODE=PICMODE_B;
                  break;
            }
            case 7: {                        // ENDINT, ������� � ����� ������ ����������� �
                                             // ����� ���������� ���� 0-2
                  i=Value&7;
                  ISR&=~(1<<i);
                  picLowINT=i;
                  picMODE=PICMODE_B;
                  break;
            } // case 7
           } // switch 7-5
        } // if OCW2
     break;

   } // case A0=0
   case 1: {
        if (picPRG) {                           //  ����� ����������������
          if      (SlavePrg==2) picHIGH=Value;
          else if (SlavePrg==1) {picPRG=0;}     // ����� slaves
          else {                                // Slave == 0
            picHIGH=Value;
            picPRG=0;
          }

          if (SlavePrg) SlavePrg--;
          if (!picPRG) picMODE=PICMODE_V;
        } else IMR=Value;                       // ��������� �����
   } // case A0=1
 } // switch A&1
//printf("%04X: PIC_W: %04x=%02x %04x\n",Z80_GetPC(),Addr,Value,picHIGH<<8|picRUS&0xf0);

//ShowPIC();
}

byte PIC_Read(int Addr)
{
 byte RetValue=0;
 byte i;

 //ShowPIC();

 switch (Addr&1) {
   case 0: {
        if (picOPROS) {                 // ����� ������
          picOPROS=0;
          i=FindMaxBit(IRR);
          if (i != 8) RetValue=i|0x80;
          else RetValue=(picLowINT+1)&0x07;
        } else RetValue=(picReadSR)?IRR:ISR;
//        } else RetValue=(picReadSR)?ISR:IRR;


//printf("%04X: PIC_R: %04x=%02x %04x\n",Z80_GetPC(),Addr,RetValue,picHIGH<<8|picRUS&0xf0);

        return RetValue;
   } //
   case 1: {
//printf("%04X: PIC_R: %04x=%02x %04x\n",Z80_GetPC(),Addr,IMR,picHIGH<<8|picRUS&0xf0);

        return IMR;break;} //IMR
 }
}

void PIC_IntRequest(int IntNum)             // ������ �� ����������.
{
 IRR|=1<<IntNum;
 //ShowPIC();
}

int CheckPIC  (void)                      // ��������, ���� ������.
{
 byte i;
 byte Low;
// ���� � ���. ������� & �� ���� ��� � ����� | �� ��� ���� � ������
 i=FindMaxBit(IRR & ~IMR | ISR);       // ����� ������������� ������ � ������ �����

 if ( (i == 8) || (i == FindMaxBit(ISR)))  return 0; // NOP
// return 1;
 return i;
}


int DoPIC  (void)                      // ��������� ��������.
                                       // If error return -1; else addr
{
 byte i;
 byte Low;
// ���� � ���. ������� & �� ���� ��� � ����� | �� ��� ���� � ������
 i=FindMaxBit(IRR & ~IMR | ISR);       // ����� ������������� ������ � ������ �����

 if ( (i == 8) || (i == FindMaxBit(ISR)))  return -1; // NOP

 IRR &= ~(1<<i);                        // �������� ������
 ISR |=   1<<i;                         // ���������� ���� ���������

 Low=(picRUS & ((picRUS & 0x04)?0xe0:0xc0)) | // 0b1110000:0b1100000
     ( i <<    ((picRUS & 0x04)?0x02:0x03)) ;

 //ShowPIC();
 return (picHIGH<<8) | Low;
}

//****************************************************************
#ifdef DBG
void Byte2Bin(char *str,byte b)
{
 str[0]=(b & 0x80)?'1':'0';
 str[1]=(b & 0x40)?'1':'0';
 str[2]=(b & 0x20)?'1':'0';
 str[3]=(b & 0x10)?'1':'0';
 str[4]=(b & 0x08)?'1':'0';
 str[5]=(b & 0x04)?'1':'0';
 str[6]=(b & 0x02)?'1':'0';
 str[7]=(b & 0x01)?'1':'0';
}

void ShowPIC(void)
{

 int i;
 char BUF[1024];
 char PICADDR[17]="00000000000xxx00";
 char MASKA[9]   ="00000000";
 char MODE[5][30]={"Full In     ",
                   "Shift A   ",
                   "Shift B     ",
                   "Special Mask",
                   "Programming"};
 return;

 Byte2Bin(MASKA,IMR);textprintf(screen,font,50,360,15,"PIC: (IMR) : %s",MASKA);
 Byte2Bin(MASKA,IRR);textprintf(screen,font,50,370,15,"PIC: (IRR) : %s",MASKA);
 Byte2Bin(MASKA,ISR);textprintf(screen,font,50,380,15,"PIC: (ISR) : %s",MASKA);
 textprintf(screen,font,50,390,15,"PIC: Mode  : %s",MODE[picMODE]);
 textprintf(screen,font,50,400,15,"PIC: SMM=%d Read=%d OPROS=%d LowINT=%d",picSMM,picReadSR,picOPROS,picLowINT);
 textprintf(screen,font,50,410,15,"PIC: Step       : %s",(picRUS&0x04)?"4":"8");
 textprintf(screen,font,50,420,15,"PIC: Addr %04x",picHIGH<<8|picRUS&0xf0);
}

void ShowPICdbg(void)
{

 int i;
 char BUF[1024];
 char MASKA[9]   ="00000000";
 char MODE[5][30]={"FIn",
                   "ShA",
                   "ShB",
                   "SpM",
                   "Prg"};
 int x=520;
 int y=623;

 rect(screen,x-3,y-3,x+15*8+3,y+16*8+3,0x20+0xf);
 textprintf(screen,font,x+48,y-20,0x20+0x0f,"PIC");

 Byte2Bin(MASKA,IMR);textprintf(screen,font,x,y+16*0,0x20+0x07,"IMR  : %s",MASKA);
 Byte2Bin(MASKA,IRR);textprintf(screen,font,x,y+16*1,0x20+0x07,"IRR  : %s",MASKA);
 Byte2Bin(MASKA,ISR);textprintf(screen,font,x,y+16*2,0x20+0x07,"ISR  : %s",MASKA);
 textprintf(screen,font,x,y+16*3,0x20+0x07,"Mode : %s  ",MODE[picMODE]);
 textprintf(screen,font,x,y+16*4,0x20+0x07,"Step : %s  ",(picRUS&0x04)?"4":"8");
 textprintf(screen,font,x,y+16*5,0x20+0x07,"Addr : %04x  ",picHIGH<<8|picRUS&0xf0);
 textprintf(screen,font,x,y+16*6,0x20+0x07,"SMM  : %d  Rd:%d",picSMM,picReadSR);
 textprintf(screen,font,x,y+16*7,0x20+0x07,"OP   : %d  LI:%d",picOPROS,picLowINT);
}
#endif

