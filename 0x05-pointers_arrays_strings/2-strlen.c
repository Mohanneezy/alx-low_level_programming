#include "main.h"
/**
 * _strlen - Checks for uppercase characters.
 * @s: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */
int _strlen(char *str)
{
int i = 0;
for (*str = 0; *str != '\0'; *str++) {
    i++;
  }
  printf("%d", i);
  return 0;
}
