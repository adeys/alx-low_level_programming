#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a list and set @head to NULL
 * @head: address of the head of the list to free
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *node = NULL;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		node = *head;
		*head = node->next;

		free(node);
	}

	head = NULL;
}
