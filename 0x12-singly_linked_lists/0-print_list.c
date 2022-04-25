#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list
 * @h: list to print
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;
	const list_t *node = NULL;

	for (node = h; node != NULL; node = node->next, n++)
		node->str == NULL
			? printf("[0] (nil)\n")
			: printf("[%u] %s\n", node->len, node->str);

	return (n);
}
