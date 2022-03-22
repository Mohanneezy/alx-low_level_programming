#include "main.h"

/**
 * rev_string - Prints a string in reverse.
 * @s: The string to be printed.
 */
void rev_string(char *s)
{
char revstr[50];
char *rvptr = revstr;
int i = -1;
while (*s)
{
s++;
i++;
}
while (i >= 0)
{
s--;
*rvptr = *s;
rvptr++;
--i;
}
*rvptr = '\0';
s = revstr;
}
