#include "main.h"

/**
 * _int print_sign - sign for lowercase
 * @c: c is an ascii character
 *
 * Return: 1 if lowercase
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else if (n == 0 )
{
_putchar('0');
}
}
