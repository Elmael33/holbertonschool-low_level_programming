#include "lists.h"
/**
 * get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list.
 * @index: index of the node
 * @head:  head of the list
 * Return: if the node does not exist, else return NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index != 0)
	{
		if (head == NULL)
		{
		return (NULL);
		}
		head = head->next;
		index--;
	}

return (head);
}
