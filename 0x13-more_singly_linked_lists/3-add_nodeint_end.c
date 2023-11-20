#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a list
 * @head: the head of the list
 * @n: the content of the newly created node
 *
 * Return: the newly created element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	tmp = *head;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new;
	return (new);
}
