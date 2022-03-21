#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
int len = 0, i;
while (*s++)
len++;
for (i = len-1; i >= 0; i--)
{
printf("%c" ,s[i]);
}
putchar('\n');
return 0;
}
