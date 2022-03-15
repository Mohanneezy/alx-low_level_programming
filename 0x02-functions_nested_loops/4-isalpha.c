#include "stdio.h"

/**
 * _islower - checks for letter
 * @c: c is an ascii character
 *
 * Return: 1 if letter and Return:0 if not 
 */

int _islower(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
