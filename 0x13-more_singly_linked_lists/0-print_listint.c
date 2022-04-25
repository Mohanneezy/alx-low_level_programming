#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a list_t list.
 * @h: The list_t list.
 *
 * Return: The number of nodes in h.
 */

size_t print_listint(const listint_t *h)
{
size_t nodes = 0;

while (h)
{
nodes++;
printf("%d\n", h->len);
h = h->next;
}
return (nodes);
}
