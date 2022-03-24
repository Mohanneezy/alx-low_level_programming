#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination char
 * @src: source char
 * Return: new char
 */

char *_strcat(char *dest, char *src)
{
int length, j;
length = 0;
while (src[length] != '\0')
{
++length;
}
for (j = 0; dest[j] != '\0'; ++j, ++length)
{
src[length] = dest[j];
}
src[length] = '\0';
return (src);
}
