#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the program name, followed by a new line.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always o.
 */
int main(int argc, char *argv[])
{
int i, x, y, product;
if (argc != 3)
printf("Error \n");
x = atoi(argv[1]);
y = atoi(argv[1 + 1]);
product = x *y;
printf("%d\n", product);
return (0);
}
