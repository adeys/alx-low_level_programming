#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a linked list
 * @head: address of the list head
 * Return: sum of all the data, 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int n = 0;
	listint_t *node = head;

	while (node != NULL)
	{
		n += node->n;
		node = node->next;
	}

	return (n);
}
