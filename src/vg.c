/**************************************************************************

�������� ����������� ����������

**************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "vg.h"


#define SECTORLEN 1024

static unsigned char DiskBuf[SECTORLEN];

static char *DskFileName;
static FILE *Str;

unsigned FormatDatLen=0x1;

unsigned Ready=0x1;

unsigned ReadIndexTrack=0x0;

static unsigned char DskIndex[5]={0,1,1,0,0};

// ��������� �����
// ���� 0-1 - ����� ���������
// ��� 2 - ������������
// ��� 6 - ������ ������
// ��� 7 - ������ ���������������
static unsigned char DskStatus=0x00;

static byte DskIndexCounter;
static int CntData;
static int DskDataSize;
static byte DskCountDatLost;
static unsigned CntReady;

static unsigned DiskPosition(unsigned Sect) {
// printf("VG.RegTrack=%d,VG.System=%d,Sect=%d ::: %08x\n",VG.RegTrack,VG.System&0x10^0x10,Sect,((VG.RegTrack<<5)|(VG.System&0x10^0x10)|Sect)<<0x08);
// return ((VG.RegTrack<<5)|(VG.System&0x10^0x10)|Sect)<<0x08;
// printf("VG.RegTrack=%d,VG.System=%d,Sect=%d ::: %08x\n",VG.RegTrack,VG.System&0x10^0x10,Sect,((VG.RegTrack*(10*1024))+(VG.System&0x10?5*1024:0)+Sect*1024));
 return ((VG.RegTrack*(10*1024))+(VG.System&0x10?5*1024:0)+Sect*1024);
}

static void SetStateStep() {
    if (VG.RegTrack<0)
        VG.TrackReal[VG.System&0x03]=VG.RegTrack=0;
    if (VG.RegTrack>0x4F)
        VG.TrackReal[VG.System&0x03]=VG.RegTrack=0x4F;
    VG.RegStatus=DskStatus&0x40;

    CntReady=0x10;  // ESL, ������������ �� ��������� ������� �������
    
    if (VG.RegCom&0x08) VG.RegStatus|=0x20;
    if (!VG.RegTrack) VG.RegStatus|=0x04;
        //// ���� 7,3,4
};




void DskVG() {

    int i;
    int Attr;
    char *AcsS;

//    printf("DskVG: %0d: %02x \n",VG.OperIO,VG.DataIO);

    if (VG.RegStatus&0x01&&!--DskCountDatLost) VG.RegStatus=0x04;
    if (CntReady) if (!--CntReady) VG.RegStatus=0x03;
    switch (VG.OperIO) {
     case 0x0: // ������ ���������
        VG.DataIO=VG.RegStatus;
        if (VG.RegCom&0x80) break;
        if (--DskIndexCounter&0xE) VG.DataIO|=0x02;
        break;
     case 0x1: // ������ �������
        if (VG.RegStatus&0x01) {
        ////�������������� ����������
        } else {
            if ((VG.DataIO&0xF0)==0xD0) return;
            switch ((VG.RegCom=VG.DataIO)>>4) {
             case 0x0: // ��������������
                VG.TrackReal[VG.System&0x03]=VG.RegTrack=0;
                VG.StepDirect=-1;
                SetStateStep();
                break;
             case 0x1: // �����
                VG.TrackReal[VG.System&0x03]=VG.RegTrack=VG.RegData;
                if (VG.RegData-VG.RegTrack<0) VG.StepDirect=-1;
                if (VG.RegData-VG.RegTrack>0) VG.StepDirect=1;
                SetStateStep();
                break;
             case 0x2:
             case 0x3: // ���
                if (VG.StepDirect==-1) goto StepRear;
             case 0x4:
             case 0x5: // ��� ������
                if (VG.RegTrack>=0) // ESL 2002-12-21
                    VG.TrackReal[VG.System&0x03]=++VG.RegTrack;
                VG.StepDirect=1;
                SetStateStep();
                break;
             case 0x6:
             case 0x7: // ��� �����
                StepRear:
                if (VG.RegTrack)
                    VG.TrackReal[VG.System&0x03]=--VG.RegTrack;
                VG.StepDirect=-1;
                SetStateStep();
                break;
             case 0x8:
             case 0x9: // ������ �������
                OpReadSector:
                if (VG.RegSect>0x10||
                    VG.RegTrack!=VG.TrackReal[VG.System&0x03]||
                    (!(DskStatus&0x04))) goto OpNotFound;

                fseek(Str,DiskPosition(VG.RegSect-1),SEEK_SET);
                if (!fread(DiskBuf,SECTORLEN,1,Str)) goto OpContSum;
                DskDataSize=SECTORLEN-1;
                VG.RegData=DiskBuf[0];
                goto OpCom;
             case 0xA:
             case 0xB: // ������ �������
                OpWriteSector:
                if (DskStatus&0x40) goto OpWrProt;
                if (VG.RegSect>0x10||
                    VG.RegTrack!=VG.TrackReal[VG.System&0x03]||
                    (!(DskStatus&0x04))) goto OpNotFound;
                DskDataSize=SECTORLEN;
                goto OpCom;
             case 0xC: // ������ ������
                DskDataSize=0x0005;
                VG.RegData=1;
                if (ReadIndexTrack) VG.RegData=VG.RegTrack;
                goto OpCom;
             case 0xE: // ������ �������
                ///????
                break;
             case 0xF: // ������ �������
                if (DskStatus&0x40) goto OpWrProt;
                DskDataSize=FormatDatLen;
                goto OpCom;
            }
        };
        break;
     case 0x2: // ������ �������
        VG.DataIO=VG.RegTrack;
        break;
     case 0x3: // ������ �������
        if (!(VG.RegStatus&0x01)) VG.RegTrack=VG.DataIO;
        break;
     case 0x4: // ������ �������
        VG.DataIO=VG.RegSect;
        break;
     case 0x5: // ������ �������
        if (!(VG.RegStatus&0x01)) VG.RegSect=VG.DataIO;
        break;
     case 0x6: // ������ ������
        if (VG.RegStatus&0x01) {
            switch (VG.RegCom>>4) {
             case 0x8:
             case 0x9: // ������ ������ ������� "������ �������"
                VG.DataIO=VG.RegData;
                DskCountDatLost=0x10;
                if (CntData<DskDataSize) VG.RegData=DiskBuf[0x01+CntData++];
                else {
                    if (VG.RegCom&0x10) {
                        VG.RegSect++;
                        goto OpReadSector;
                    } else goto OpOk;
                }
                break;
             case 0xC: // ������ ������ ������� "������ ������"
                VG.DataIO=VG.RegData;
                DskCountDatLost=0x10;
                if (CntData<DskDataSize) VG.RegData=DskIndex[CntData++];
                else goto OpOk;
                break;
            }
        } else {
            VG.DataIO=VG.RegData;
        };
        break;
     case 0x7: // ������ ������
        if (VG.RegStatus&0x01) {
            switch (VG.RegCom>>4) {
             case 0xA:
             case 0xB: // ������ ������ ������� "������ �������"
                DiskBuf[CntData++]=VG.RegData=VG.DataIO;
                DskCountDatLost=0x10;
                if (CntData>=DskDataSize) {
                    fseek(Str,DiskPosition(VG.RegSect-1),SEEK_SET);
                    if (!fwrite(DiskBuf,SECTORLEN,1,Str)) goto OpContSum;
                    if (VG.RegCom&0x10) {
                        VG.RegSect++;
                        goto OpWriteSector;
                    } else goto OpOk;
                }
                break;
             case 0xF: // ������ ������ ������� "������ �������"
                VG.RegData=VG.DataIO;
                DskCountDatLost=0x10;
                if (++CntData>=DskDataSize) {
                    memset(DiskBuf,0,sizeof DiskBuf);
                    if (DskStatus&0x04) {
                        fseek(Str,DiskPosition(0),SEEK_SET);
                        for (i=0;i<0x5&&fwrite(DiskBuf,SECTORLEN,1,Str);i++);
                    } else {
                        if (!(Str=fopen(DskFileName,"wb+"))) goto OpOk;
                        for (i=0;i<0xA00&&fwrite(DiskBuf,0x100,1,Str);i++);
                        DskStatus|=0x4;
                    }
                    goto OpOk;
                }
                break;
            }
        } else {
            VG.RegData=VG.DataIO;
        };
        break;
     case 0x8: {// ������ �������� Intrq � Drq
        unsigned char IntrqDrq=0xBF;
        if (VG.RegStatus&0x01) IntrqDrq=0x3F;
        if (VG.RegStatus&0x02) IntrqDrq=0x7F;
        VG.DataIO=IntrqDrq;
        break;
     }
     case 0x9: // ������ ���������� �������� ����������� ����������
        if (VG.RegStatus&0x01&&VG.RegCom&0x80) goto OpContSum;
        VG.System=VG.DataIO;
        if ((VG.System^DskStatus)&0x03) {
            DiskVG(0xB);
            DiskVG(0xA);
        }
        break;
     case 0xA: {// ������������� �����
        if (DskStatus&0x80) return;
        DskStatus=VG.System&0x03;
        DskFileName=Disks[DskStatus];
        Attr=GetFileAttr(DskFileName);
        if (Attr!=-1) {
            Attr&=0x01;
            DskStatus|=(Attr)<<6;
            AcsS="rb+";
            if (Attr) AcsS="rb";
            if (Str=fopen(DskFileName,AcsS)) DskStatus|=0x04;
        }
        DskStatus|=0x80;
        break;
     }
     case 0xB: // ������ �����
        if (!(DskStatus&0x80)) return;
        if (DskStatus&0x04) fclose(Str);
        DskStatus=0x00;
        break;
     case 0xC: // Reset ��93
        VG.RegStatus=0x24;
        VG.RegCom=0x00;
        VG.RegTrack=0x00;
        VG.RegSect=0x01;
        VG.RegData=0x00;
        VG.System=0x3C;
        VG.StepDirect=0xFF;
        if (DskStatus&0x80&&DskStatus&0x03) {
            DiskVG(0xB);
            DiskVG(0xA);
        }
        break;
    }
    return;
    OpOk: // �������� ����������
        VG.RegStatus=0x00;
        return;
    OpWrProt: // ������ ������
        VG.RegStatus=0x40;
        return;
    OpNotFound: // ������ �� ������
        VG.RegStatus=0x10;
        return;
    OpContSum: // ������ ����������� �����
        VG.RegStatus=0x08;
        return;
    OpCom: // ����� �������
        DskCountDatLost=0x00;
        CntData=0x0000;
        VG.RegStatus=0x03;
        if (!Ready) {
            VG.RegStatus=0x01;
            CntReady=0x10;
        }
}

void DiskVG(byte Oper) {
    VG.OperIO=Oper;
    if (Oper==0xA) ChDir(DskPth);
    DskVG();
ExitP:
    if (Oper==0xA) ChDir(StPth);
}


