#include "main.h"

/**
 *puts_half- Prints a string in reverse.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
int i, j, max;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	max = i;
	j = max / 2;
	while (j <= max)
	{
		_putchar(str[j]);
		j++;
	}
	
}
