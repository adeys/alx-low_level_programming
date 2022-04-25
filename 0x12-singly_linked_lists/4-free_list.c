#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list
 * @head: head of the list to free
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *node = NULL;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		node = head;
		head = node->next;

		free(node->str);
		free(node);
	}
}
