#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add node at the begenning
 * @head: the head of the node
 * @n: the data to be added
 *
 * Return: the new head of the node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	h = *head;
	if (h)
	{
		while (h->prev)
			h = h->prev;
	}
	new->next = h;
	if (h)
		h->prev = new;

	*head = new;

	return (new);
}
