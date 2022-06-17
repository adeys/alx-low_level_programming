#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: The list to free
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node = NULL;

	while (head)
	{
		node = head->next;
		free(head);    
		head = node;
	}
}
