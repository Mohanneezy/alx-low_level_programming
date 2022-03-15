#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int print_alphabet(void)
{
    char alpha ='a';
    for (alpha= 'a' ; alpha<='z'; alpha++)
    print_alphabet(alpha);
    putchar('\n');
    return (0);
}
