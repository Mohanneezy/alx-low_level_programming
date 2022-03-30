#include "main.h"

/**
 * _pow_recursion* @s: The string to be printed.
 * @y: The string to be powered.
 * @y: The string to poweree.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
