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
#include <termio.h>

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
  struct termio old, new;
  int fd;

  fd = fileno(stdin);

  if (ioctl(fd, TCGETA, &old) == -1)
	  return -1;

  new = old;
  new.c_lflag &= ~(ICANON | ECHO);

  if (ioctl(fd, TCSETA, &new) == -1)
	  return -1;

  scanf("%c", &a);

  ioctl(fd, TCSETA, old);

  return a;
}
