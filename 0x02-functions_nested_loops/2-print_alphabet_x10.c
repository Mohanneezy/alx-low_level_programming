#include <main.h>
/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet_x10(void)
{
    char alpha ='a';
    for (int i=0 ; i<10 ; i++)
    for (alpha= 'a' ; alpha<='z'; alpha++)
    _putchar(alpha);
    _putchar('\n');
}