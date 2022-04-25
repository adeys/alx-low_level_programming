#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a list
 * @head: head of the list to free
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *node = NULL;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		node = head;
		head = node->next;

		free(node);
	}
}
