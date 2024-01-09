#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a doubly linked list
 * @head: list to be freed
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	if (head == NULL)
		return;
	while (head->prev)
		head = head->prev;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}


}
