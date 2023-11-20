#include "lists.h"

/**
 * pop_listint - deletes the head of a list.
 * @head: the head of the list.
 *
 * Return: returns the head node's data.
 */

int pop_listint(listint_t **head)
{
	int k;
	listint_t *tmp;

	if (!head || !*head)
		return (0);

	tmp = *head;
	k = head->n;
	*head = *head->next;
	free(tmp);
	return (k);
}

