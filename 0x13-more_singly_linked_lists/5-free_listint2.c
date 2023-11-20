#include "lists.h"

/**
 * free_listint2 - frees a list ane makes head NULL
 * @head: the head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}