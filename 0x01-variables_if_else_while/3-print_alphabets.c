#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch = 'a';
char upper = 'A';

for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (upper = 'A'; upper <= 'Z'; upper++)
putchar(upper);
putchar('\n');

return (0);
}

