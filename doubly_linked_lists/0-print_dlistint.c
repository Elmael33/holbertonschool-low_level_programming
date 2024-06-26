#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: head of the list.
 * Return: number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n;

	for (n = 0; h; h = h->next, n++)
	{
		printf("%d\n", h->n);
	}

	return (n);
}
