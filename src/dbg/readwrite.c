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
#include <stdio.h>
#include <string.h>
#include "dbg.h"
#include "korvet.h"

static int x=29;
static int y=9;

static char FileName[1024]="";
static int Begin=0;
static int End  =0xffff;
static int Addr;

void UpdateRW(int endfl) {
  char buf[128];

  tSetUpdate(0);

                            tScreenPutString("______________________",C_Default,x+ 8,y+1);
                            tScreenPutString(FileName,C_Default,x+ 8,y+1);
  sprintf(buf,"%04x",Begin);tScreenPutString(buf     ,C_Default,x+ 9,y+3);
  if (endfl) {sprintf(buf,"%04x",End  );tScreenPutString(buf     ,C_Default,x+23,y+3);}
  tSetUpdate(1);
}

int RWDialog(int mode) { //1 - write

  char Title[2][16]={"Д Read memory"," Write memory"};
  int tmp;

  tSetUpdate(0);

  tScreenPutString("ЪДДДДДДДД              ДДДДДДДДї",C_ReadWrite,x,y+0);
  tScreenPutString("і Name: ______________________ і",C_ReadWrite,x,y+1);
  tScreenPutString("і                              і",C_ReadWrite,x,y+2);
  tScreenPutString("і  Start:                      і",C_ReadWrite,x,y+3);
  tScreenPutString("АДДДДДДДДДДДДДДДДДДДДДДДДДДДДДДЩ",C_ReadWrite,x,y+4);

  tScreenPutString(Title[mode],C_ReadWrite,x+9,y+0);

  if (mode) tScreenPutString("End:",C_ReadWrite,x+23-4,y+3);

  UpdateRW(mode);
  tSetUpdate(1);

  tmp=LineEdit(FileName,22,x+8,y+1); UpdateRW(mode);
  if (!tmp) return 0;
  if (strlen(FileName) == 0) return 0 ;

  tmp=HEXEDIT(Begin,4,x+9,y+3);
  if (tmp<0) return 0;
  Begin=tmp;UpdateRW(mode);

  if (mode) {
    tmp=HEXEDIT(End,4,x+23,y+3);
    if (tmp<0) return 0;
    End=tmp;UpdateRW(mode);
  }

  return 1;
}

void WriteMEM(void) {
  FILE *F;

  if (!RWDialog(1)) return;

  F=fopen(FileName,"wb");
  for (Addr=Begin;Addr<=End;Addr++) fputc(Emulator_Read(Addr),F);
  fclose(F);
}

void ReadMEM(void) {
  int i;
  int b;
  FILE *F;

  if (!RWDialog(0)) return;

  F=fopen(FileName,"rb");
  if (F == NULL) return;

  i=Begin;
  while ( (b=fgetc(F))!=EOF && (i<=0xffff)) Emulator_Write(i++,b);

  fclose(F);
}
