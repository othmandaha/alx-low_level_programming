#include "lists.h"

/**
 * print_dlistint - printing a doubly linked list
 * @h: the doubly linked list to be printed
 *
 * Return: the nuber of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t s = 0;

	if (!h)
		return (s);

	while (h->prev)
		h = h->prev;

	while (h)
	{
		printf("%d\n", h->n);
		s++;
		h = h->next;
	}
	return (s);
}
