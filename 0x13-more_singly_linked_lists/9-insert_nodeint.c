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
	listint_t *node, *current;

	if (*head == NULL)
		return (NULL);

	current = *head;
	while (i < idx - 1)
	{
		if (current == NULL)
			return (NULL);

		current = current->next;
		i++;
	}

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = current->next;
	current->next = node;

	return (node);
}
