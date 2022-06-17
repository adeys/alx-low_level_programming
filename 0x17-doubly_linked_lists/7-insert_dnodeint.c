#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at index in a linked list
 *
 * @h: pointer to linked list head
 * @idx: index to insert at
 * @n: value to insert
 *
 * Return: address of the new node or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = NULL, *node = NULL;
	unsigned int i = 0;

	if (h == NULL || (*h == NULL && idx != 0))
		return (NULL);

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;

	temp = *h;
	for (; temp && i != idx; i++)
		temp = temp->next;

	if (!temp)
		return (NULL);

	node->prev = temp->prev;
	node->next = temp;
	node->prev->next = node;
	temp->prev = node;

	if (idx == 0)
		*h = node;

	return (node);
}
