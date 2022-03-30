#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed.
 */
void _print_rev_recursion(char *s)
{
char revstr[500000];
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
printf("%s\n", revstr);
}
