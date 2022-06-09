#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 *
 * @h: The list to print
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;
	const dlistint_t *node = h;

	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
		size++;
	}

	return (size);
}
