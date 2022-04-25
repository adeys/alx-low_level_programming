#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a list
 * @h: list to print
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;
	const listint_t *node = NULL;

	for (node = h; node != NULL; node = node->next, n++)
		printf("%d\n", node->n);

	return (n);
}
