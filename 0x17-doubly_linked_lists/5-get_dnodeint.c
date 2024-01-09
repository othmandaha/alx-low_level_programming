#include "lists.h"

/**
 * get_dnodeint_at_index - give the nth node of a D.L.L
 * @head: the doubly linked list
 * @index: the index of the node
 *
 * Return: the node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	while (head->prev)
		head = head->prev;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
