#include "main.h"

/**
 * print_last_digit - checks for lowercase
 * @n: n is an ascii character
 *
 * Return: 1 if lowercase
 */
int print_last_digit(int n)
{
int num;
num = n % 10;
if (num < 0)
num = num * -1;
_putchar (num + '0');
return (num);
}
