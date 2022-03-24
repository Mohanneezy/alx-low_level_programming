#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination char
 * @src: source char
 * @n: byte size
 * Return: new char
 */

char *_strncat(char *dest, char *src, int n)
{
int length, j;
length = 0;
while (dest[length] != '\0')
{
++length;
}
for (j = 0; src[j] != '\0'; ++j, ++length)
{
dest[length] = src[j];
}
dest[length] = '\0';
return (dest);
}
