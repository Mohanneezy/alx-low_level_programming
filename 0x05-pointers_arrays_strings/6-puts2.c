#include "main.h"

/**
 * puts2 - Prints a string in reverse.
 * @str: The string to be printed.
 */
void puts2(char *str)
{
int i , j=0;
while (*str++)
j++;
for (i =0; i<j ;i++)
{
printf ("%s" ,str[i+2]);
}
}
