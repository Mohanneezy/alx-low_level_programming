#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Creates an array of chars and
 *                initializes it with a specific char.
 * @b: The specific char to intialize the array with.
 *
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */
void *malloc_checked(unsigned int b)
{
void *mal = malloc(b);
if (mal == NULL)
exit(98);
return(mal);
}
