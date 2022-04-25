#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a linked list
 * @head: address of the head of the list to free
 * Return: value of the node's data or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *node = NULL;

	if (*head == NULL)
		return (0);

	node = *head;
	n = node->n;
	*head = node->next;

	free(node);

	return (n);
}
