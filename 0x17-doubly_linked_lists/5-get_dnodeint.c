#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlinstint_t linked list
 *
 * @head: linked list to use
 * @index: node index
 *
 * Return: node at @index or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int i = 0;

	for (; node && i != index; i++)
		node = node->next;

	return (node);
}
