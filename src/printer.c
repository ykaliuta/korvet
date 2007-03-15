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
// Korvet ETALON emulator project
// (c) 2000-2003 Sergey Erokhin aka ESL
// (c) 2003      Korvet Team.

#include <stdio.h>
#include <conio.h>
#include <allegro.h>
#include "korvet.h"

/*
; ������� ����������� ����������

; � ������ ����� ���� ������ ������� ������, �������
; ���������� � ������� ���������, ������������� � ����
; ������ ������������� �������� ��580��55�, ������
; ������� ���������� ������������ ����������������
; ���������� ������ (����� � ���������). �������� �����
; ������ �������������� ��� ������� �������� ����������
; �������� � �������� ��������� ����� ������ ����
; ������� � ������� ������ � ����������� ���������� �
; ������� ���� ������������� ������� � �������� ����������.
; � �������� ����������� ���������� � ��������� �������
; ���������� ������� �������������� �������������
; ����� � ����� ��������� (�������� ���������������
; � ����������� �� �������� ��������� LSTINV).

LSTDAT EQU 30H  ; ������� ������ ��������
LSTSTS EQU 38H  ; ������� ���������
LSTCTL EQU 33H  ; ������� ����������
LSTINV SET   1  ; ������� ��������
                ; ������ � ���������
LSTRDY EQU   4  ; ����� �������� ����������
                ; ��������
STBSET EQU  0BH ; ��������� ������ ������
STBRST EQU  0AH ; ����� ������ ������

LSTINT EQU 6    ; ������� ���������� �� ����������
                ; ��������

        �������  ����������� ���������� (��) ������������ �����
������ �� ������ �  ���������  �����������  ������������  �����
�������������    ����������   ����   ����-�(CENTRONICS).    ���
������������ �������� ������ ����������������  �����  ������  �
�������   ��������   �������   ����������   �   ����   ��������
������������� "SE", ������ �� "ACK" � ������� "BUSYP".
        �������  �������� ������� ������, ������������� �� ����
�����  "A"  ����������   D16   (13.52),   �������   ����������,
������������� �� ���� ����� "C" ���������� D16 (������� 4 � 5),
�������  ���������,  ������������� �� ���� ����� "A" ����������
D17 (13.35) (������ 2).  ��������������  ������������  ��������
������  � ��, �������������� ���������� ��������� ����� "BUSYP"
�����   �������    ���������,    �������    ���    ��    ������
"CSIOP1","�0","�1".  ��� ������� �������� ���������� �� (������
�������  ���������� �� ����� "BUSYP") �������������� ����������
����  ������  �  �������  ������,   �������   ���   ��   ������
"CSIOP2","�0","�1",     �������������    �    ����������    ���
������������� �������.  ������������� �����������  ������������
��  ��  ����������,  ���  ����  ������  "BUSYP" �� ����� "IRQ6"
���������� � ���������� ����������.  ��������������  ����������
������, ����� ��������� ���� ������.


PPI2
..30    -       LSTDATA
..31    -       empty
..32    -       (CASOUT, LSTCTL, SOUNDC)
..33    -       RUS

PPI1
..38    -       (LANADDR, VISTS, LSTSTS, VBLANK, CASIN)
*/

extern int PPI2_A;
char FileNamePrinter[1024]="printer.txt";
FILE *PrinterFILE;

#define MAXPRINTBUF 1024
unsigned char PrinterBuffer[MAXPRINTBUF];
int PrintBufCntr=0;

//int LSTSTS; // ������� ���������� �������� PPI1, port A, Bit 00000x00
//int LSTCTL; // ����� ������

int PrinterStatus=0;
int StatusDelay=0;

void FlushPrinterBuf(void) {
    static int iter=0;
    textprintf(screen,font,20,20,255,"%d",iter++);
    if (PrintBufCntr) fwrite(PrinterBuffer,1,PrintBufCntr,PrinterFILE);
    PrintBufCntr=0;
}

void AddToPrinter(unsigned char C) {
    if (PrintBufCntr == MAXPRINTBUF) FlushPrinterBuf();
    PrinterBuffer[PrintBufCntr++]=C;
//    textprintf(screen,font,20,40,255,"%c ",C);
}

int InitPrinter(void) {
     PrinterFILE=fopen(FileNamePrinter,"ab");
     PrintBufCntr=0;
     return 1;
}

void DestroyPrinter(void) {
    FlushPrinterBuf();
    fclose(PrinterFILE);
}

int GetPrinterStatus(void) {
  int ret;

  // =1 - ready
  if (StatusDelay) {StatusDelay--;ret=0;}
  else {ret=1;}
  return ret;
}

int SetPrinterStrobe(int Value) {
  static int PrevStrobe=0;

  if ( Value && (PrevStrobe == 0) ) {
    AddToPrinter(PPI2_A^0xff);
    StatusDelay=5; // Delay 5 port read
  }
  PrevStrobe=Value;
}

