#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a node at the end of D.L.L
 * @head: the head of the list
 * @n: the data to be added
 *
 * Return: the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new;

	h = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (h)
	{
		while (h->next)
		{
			h = h->next;
		}
		h->next = new;
	}
	else
		*head = new;

	new->prev = h;

	return (new);
}
