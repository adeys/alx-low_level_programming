#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked @list_t list
 * @h: list to use
 * Return: number of nodes in @h
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;
	const listint_t *n = h;

	while (n != NULL)
	{
		len++;
		n = n->next;
	}

	return (len);
}
