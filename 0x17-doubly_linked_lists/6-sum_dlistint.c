#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a dlistint_t linked list
 *
 * @head: linked list to process
 * Return: sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
