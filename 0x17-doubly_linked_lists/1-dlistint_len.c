#include "lists.h"
/**
 * dlistint_len - counts the length of a doubly linked list
 * @h: the doubly linked list
 *
 * Return: the length
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (!h)
		return (count);
	while (h->prev)
		h = h->prev;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
