#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlinstint_t list
 *
 * @head: list header
 * @n: node to add
 *
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t)), *tmp = NULL;

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (head == NULL || *head == NULL)
	{
		node->prev = NULL;
		*head = node;
	}
	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;

		tmp->next = node;
		node->prev = tmp;
	}

	return (node);
}
