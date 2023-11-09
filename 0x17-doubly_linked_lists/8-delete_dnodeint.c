#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *forward = *head;
	dlistint_t *backward = NULL;
	unsigned int i = 0;

	if (forward != NULL)
		while (forward->prev != NULL)
			forward = forward->prev;

	while (forward != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = forward->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				backward->next = forward->next;

				if (forward->next != NULL)
					forward->next->prev = backward;
			}

			free(forward);
			return (1);
		}
		backward = forward;
		forward = forward->next;
		i++;
	}

	return (-1);
}
