#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @idx: index of the list for the new node
 * @n: integer in the new node
 * @h: pointer head of the list
 * Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new;

	if (h == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	while (idx != 1)
	{
		temp = temp->next;
	if (temp == NULL)
	{
		return (NULL);
	}
	idx--;
	}

	if (temp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = temp;
	new->next = temp->next;
	temp->next->prev = new;
	temp->next = new;
return (new);
}
