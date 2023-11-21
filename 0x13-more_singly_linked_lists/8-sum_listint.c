#include "lists.h"

/**
 * sum_listint - counts the sum of the data of each node
 * @head: the head of the list.
 *
 * Return: returns the sum.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
