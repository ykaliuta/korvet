/* -*- c -*-
 * File    lib.c
 * Created Mon Oct  6 00:29:22 2008
 * Author: Yauheni Kaliuta <y.kaliuta@gmail.com>
 *
 *
 */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

char *strupr(char *str)
{
  int i;
  int len = strlen(str);

  for (i = 0; i < len; i++)
    str[i] = toupper(str[i]);
  return str;
}


char getch(void)
{
  char a;
  printf("no getch(), enter smth\n");
  scanf("%c", &a);
  return a;
}
