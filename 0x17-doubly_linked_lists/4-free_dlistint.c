#include "lists.h"
#include <stdio.h>

/**
 * free_dlistint - frees a doubly linked list
 * @head: list to be freed
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *h;

	if (head == NULL)
		return;
	h = head;
	while (h->prev)
		h = h->prev;
	if (h)
	{
		while (h->next)
		{
			current = h;
			h = h->next;
			free(current);
		}

	}
}
