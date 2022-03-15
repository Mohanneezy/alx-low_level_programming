#include "main.h"

/**
 * print_to_98 for lowercase
 * @n: n is an ascii character
 *
 * Return: 1 if lowercase
 */
void print_to_98(int n)
{
int i;
if (n < 98)
{
for (i = n; i < 98; i++)
printf("%d, ", i);
}
else
{
for (i = 98; i < n; i++)
printf("%d, ", i);
}}
