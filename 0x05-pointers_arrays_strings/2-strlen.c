#include "main.h"
/**
 * _strlen - Checks for uppercase characters.
 * @s: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */
int _strlen(char *s)
{
char *str;
int i = 0;
for (s = str; *s != '\0'; s++) {
    i++;
  }
  printf("%d", i);
}

