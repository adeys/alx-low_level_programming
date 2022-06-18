#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index
 *
 * @head: pointer to linked list head
 * @index: index of node to remove
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = NULL;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	for (temp = *head; temp && i <= index; i++)
	{
		if (i == index)
		{
			if (temp->next)
				temp->next->prev = temp->prev;
			if (temp->prev)
				temp->prev->next = temp->next;

			if (index == 0)
				*head = temp->next;

			free(temp);

			return (1);
		}

		temp = temp->next;
	}

	return (-1);
}
