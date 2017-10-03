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
#ifndef _KORVET_H
#define _KORVET_H

#define DBG
#define noEGA
#define SOUND
#define noWAV
#define noTRACETIMER

#define RAMSIZE         (64*1024)


#define OK 		0
#define ERROR		1
#define LANADDR         0x0f       // Адрес РМУ в сети ^0x0f

#define CPU_CLK         2500000    // частота ЦПУ в герцах
#define ALL_TAKT        50000      // кол-во тактов в одном VBLANK
#define VBLANK_TAKT     8170       // кол-во тактов обрптного хода луча

#define KBD_QWERTY	0
#define KBD_JCUKEN	1
#define KBD_AUTO	2

#define SCR_EMULATOR	1
#define SCR_DBG		2

#define SOUNDFREQ (44100/2)
#define AUDIO_BUFFER_SIZE (SOUNDFREQ/50)

#ifndef _TYPEDEF_
typedef unsigned char  byte;
typedef unsigned short word;
typedef unsigned       dword;
typedef signed char    offset;
#define _TYPEDEF_
#endif

void CPU_Init(void);
int CPU_Exec1step (void);

void Memory_Init(void);
void Emulator_Write(int Addres,byte Value);
byte Emulator_Read(int Addres);
byte RD_BreakPoint(int Addr);
byte WR_BreakPoint(int Addr,byte Value);

void FDC_Reset(void);
void FDC_Write_DRVREG(byte Value);
void FDC_Write(int Addr, byte Value);
byte FDC_Read(int Addr);
byte FDC_Read_DRVREG(void);

void KBD_Init(void);
int  KEYBOARD_Read(int Addr);

int GZU_Init(void);
void GZU_Write(int Addr,byte Value);
byte GZU_Read(int Addr);

int ACZU_Init(void);
void ACZU_Write(int Addr,byte Value);
byte ACZU_Read(int Addr);

void SCREEN_Init(void);
int SCREEN_SetGraphics(int ScrMode);
int SCREEN_SetText(void);
void SCREEN_ShowScreen(void);

void LUT_Init(void);
void LUT_Write(byte Value);
void LUT_Update(int BWFlag);
void PutLED_FPS(int x,int y,int i);
void PutLED_FDD(int x,int y,int i,int OnFlag);

void PIC_init(void);
byte PIC_Read(int Addr);
void PIC_Write(int Addr,byte Value);
void PIC_IntRequest(int IntNum);
int DoPIC(void);
int CheckPIC(void);
void PIC_IntRequest(int IntNum);
void ShowPICdbg(void);

void PPI1_Write(int Addr, byte Value);
byte PPI1_Read(int Addr);

void PPI2_Write(int Addr, byte Value);
byte PPI2_Read(int Addr);

void PPI3_Write(int Addr, byte Value);
byte PPI3_Read(int Addr);

void ShowPPIdbg(void);

void Serial_Init(void);
void RS232_Write(int Addr, byte Value);
byte RS232_Read(int Addr);
void AddSerialQueue(byte b);

void LAN_Write(int Addr,byte Value);
byte LAN_Read(int Addr);

void InitTMR(void);
void Timer_Write(int Addr, byte Value);
byte Timer_Read(int Addr);
void MakeSound(void);
int DoTimer(void);

void CheckROM(void);
void CheckCCP(void);
void CheckComEXEC(void);

void InitOSD(void);
void DestroyOSD(void);
void PutLED_Lut(int x,int y,int i,int c);

int InitPrinter(void);
void DestroyPrinter(void);
int GetPrinterStatus(void);
int SetPrinterStrobe(int Value);

int Init_Joystick(void);
int Read_Joystick(void);

void dbg_INIT(void);
void doDBG(void);

void InitLabel(void);

void ChkMouse(void);
void AddPC(word pc);
char getch(void);
void GUI(void);
int ChDir(char *t);
int GetFileAttr(char *t);

#endif
