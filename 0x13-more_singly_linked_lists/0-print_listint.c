/*
 * File: 0-print_list.c
 * Auth: Brennan D Baraban
 */

#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The list_t list.
 *
 * Return: The number of nodes in h.
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("%d\n", h->len);

		nodes++;
		h = h->next;
	}

	return (nodes);
}
