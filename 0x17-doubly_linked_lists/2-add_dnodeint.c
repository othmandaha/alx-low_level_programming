#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

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

int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint(&head, 0);
    add_dnodeint(&head, 1);
    add_dnodeint(&head, 2);
    add_dnodeint(&head, 3);
    add_dnodeint(&head, 4);
    add_dnodeint(&head, 98);
    add_dnodeint(&head, 402);
    add_dnodeint(&head, 1024);
    print_dlistint(head);
    return (EXIT_SUCCESS);
}
