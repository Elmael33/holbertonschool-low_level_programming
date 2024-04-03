#include "lists.h"
#include <stdio.h>

/**
 * print_list - returns the number of elements in a linked list_t list.
 * @h: list
 * Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
	}

	return (i);
}
