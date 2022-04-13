#include <stdio.h>
/**
 * main - Prints the program name, followed by a new line.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always o.
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
int i, sum = 0;
for (i = 1; i < argc; i++)
{
	sum++;
}
printf("%d\n", sum);
return (0);
}
