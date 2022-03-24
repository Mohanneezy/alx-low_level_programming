#include "main.h"

/**
 * _strcmp - concatenates two strings
 * @s1: destination char
 * @s2: source char
 * Return: new char
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;
int count = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
count = 1;
break;
}
i++;
}
if (count == 0)
{
return (0);
}
else
{
return (1);
}
}
