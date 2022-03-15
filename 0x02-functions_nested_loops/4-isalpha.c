#include "main.h"

/**
 * _isalpha - checks for letter
 * @c: c is an ascii character
 *
 * Return: 1 if letter and Return:0 if not
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
