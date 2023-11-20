#include "lists.h"

/**
 * print_listint - print all the elements of a list
 * @h: the list
 *
 * Return: return the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
