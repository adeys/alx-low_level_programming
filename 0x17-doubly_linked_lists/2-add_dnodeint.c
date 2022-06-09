#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlinstint_t list
 *
 * @head: list header
 * @n: node to add
 *
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *node = malloc(sizeof(dlistint_t));
    if (node == NULL)
        return (NULL);

    node->n = n;
    node->prev = NULL;

    if (head != NULL)
        node->next = *head;

    *head = node;

    return (node);
}
