#include "lists.h"

/**
 * add_nodeint - add a new node at the head of the list
 * @head: the current head of the list.
 * @n: the number stored in the newly created node
 *
 * Return: the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t);
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
