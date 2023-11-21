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

	i = 0;
	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;

	}
	return (NULL);
}
