#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 *
 * @h: The list to use
 * Return: The number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;
	const dlistint_t *node = h;

	while (node)
	{
		node = node->next;
		size++;
	}

	return (size);
}
