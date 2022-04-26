#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: address of the list head
 * @idx: index of the list where the node should be inserted
 * @n: value of the node
 * Return: address of the node, NULL if it doesn't exist
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *node, *current, *prev = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	current = *head;
	while (i < idx)
	{
		if (current == NULL)
			return (NULL);

		prev = current;
		current = current->next;
		i++;
	}

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	if (prev == NULL)
	{
		node->next = current;
		*head = node;
	}
	else
	{
		prev->next = node;
		node->next = current;
	}

	return (node);
}
