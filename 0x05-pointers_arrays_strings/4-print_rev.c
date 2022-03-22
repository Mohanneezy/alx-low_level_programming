#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
char revstr[50];
char *rvptr = revstr;
int i=-1;
while(*s)
{
s++;
i++;
}
while(i>=0)
{
s--;
*rvptr = *s;
rvptr++;
--i;
}
*rvptr='\0';
printf(" %s\n",revstr);
}
