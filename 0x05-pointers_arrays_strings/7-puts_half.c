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
int k = j/2;

for (i = k; i < j ;i++)
{
printf ("%c" ,str[i]);
}
putchar('\n');
}
