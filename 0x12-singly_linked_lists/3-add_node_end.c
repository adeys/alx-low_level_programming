#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @str: string argument
 * Return: the string length
 */
int _strlen(const char *str)
{
	int n = 0;

	while (str[n] != '\0')
		n++;

	return (n);
}

/**
 * add_node_end - adds a new node at theend of a list
 * @head: pointer to the address of the list head
 * @str: node string content
 * Return: address to the new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *h;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = str != NULL ? strdup(str) : NULL;
	if (node->str == NULL && str != NULL)
	{
		free(node);
		return (NULL);
	}

	node->len = str == NULL ? 0 : _strlen(str);
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		h = *head;
		while (h->next != NULL)
			h = h->next;

		h->next = node;
	}

	return (node);
}
