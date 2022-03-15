#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
char alpha = 'a';
int i;
for (i = 0 ; i < 10 ; i++)
{
for (alpha = 'a' ; alpha <= 'z'; alpha++)
_putchar(alpha);
_putchar('\n');
}
}
