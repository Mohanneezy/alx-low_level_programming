#include "main.h"

/**
 * _strcmp - concatenates two strings
 * @s1: destination char
 * @s2: source char
 * Return: new char
 */

int _strcmp(char *s1, char *s2)
{
	if (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
