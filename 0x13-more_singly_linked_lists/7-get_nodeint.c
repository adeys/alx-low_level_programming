#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: address of the list head
 * @index: index of the node, starting at 0
 * Return: address of the node, NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node = head;

	while (i < index)
	{
		if (node == NULL)
			return (NULL);

		node = node->next;
		i++;
	}

	return (node);
}
