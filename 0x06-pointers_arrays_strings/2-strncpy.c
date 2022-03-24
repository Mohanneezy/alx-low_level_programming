#include "main.h"

/**
 * _strncpy - concatenates two strings
 * @dest: destination char
 * @src: source char
 * @n: byte size
 * Return: new char
 */

char *_strncpy(char *dest, char *src, int n)
{
int j;
for (j = 0; j < n && src[j] != '\0'; ++j)
{
dest[j] = src[j];
}
for(; j < n; j++)
dest[j] = '\0';
return (dest);
}
