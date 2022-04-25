#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: pointer to the address of the list head
 * @n: node content
 * Return: address to the new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
