#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given index.
 * @head: the head of the list.
 * @idx: the index in which to insert the node.
 * @n: the data that the node holds.
 *
 * Return: a pointer to the newly created node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *tmp;
	unsigned int i;

	if (head == NULL)
		return (0);
	new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (0);
	new->n = n;
	tmp = *head;
	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && tmp != NULL; i++)
		{
			tmp = tmp->next;
		}
		if (tmp == NULL)
			return (0);
	}
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	tmp->next = new;
	new->next = tmp->next;
	return (new);
}
