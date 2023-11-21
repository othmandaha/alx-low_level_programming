#include "lists.h"
#include <string.h>

/**
 * get_nodeint_at_index - it gives the node at index
 * @head: the head of the list.
 * @index: the index of the node
 *
 * Return: it returns the node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (0);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (0);
	}
	return (head);
}
