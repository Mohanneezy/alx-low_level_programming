#include "main.h"

/**
 *puts_half- Prints a string in reverse.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
int i , k, j = 0;
while (*str++)
{
j++;
}
k=j;
for (i = k/2; i <= k ;i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
