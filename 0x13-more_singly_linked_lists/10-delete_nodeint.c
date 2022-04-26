#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index @index
 * @head: address of the list head
 * @index: index of the list where the node should be deleted
 * Return: 1 if success, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node, *prev = NULL;

	if (head == NULL || *head == NULL)
		return (-1);

	node = *head;
	while (i < index)
	{
		if (node == NULL)
			return (-1);

		prev = node;
		node = node->next;
		i++;
	}

	if (prev == NULL)
		*head = node->next;
	else
		prev->next = node->next;

	free(node);

	return (1);
}
