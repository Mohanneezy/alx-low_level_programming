#include "main.h"

/**
 *puts_half- Prints a string in reverse.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
int i , j = 0;
while (*str++)
j++;
for (i = j/2; i <= j ;i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
