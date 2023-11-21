#include "lists.h"

/**
 * delete_nodeint_at_index - delets a node at a given index
 * @head: the head of the list
 * @index: the index of the node.
 *
 * Return: 1 if it succeeded, -1 otherwise.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
		return (1);
	}
	previous = *head;

	for (i = 0; i < index - 1; i++)
	{
		if (previous->next == NULL)
			return (-1);
		previous = previous->next;
	}
	current = previous->next;

	if (current == NULL)
		return (-1);
	previous->next = current->next;
	free(current);
	return (1);
}
