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
int n,num;
srand(time(0));
n = rand() - RAND_MAX / 2;
num=n %10;
if (num > 5)
{
printf("Last digit of,%d and is greater than 5\n", n);
}
else if (num < 6)
{
printf("Last digit of,%d and is less than 6 and not 0\n", n);
}
else if (num == 0)
{
printf("Last digit of,%d is zero\n", n);
}
return (0);
}
