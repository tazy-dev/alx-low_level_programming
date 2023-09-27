/*
 * File: 10-delete_nodeint.c
 * Auth: tazy-dev
 */

#include "lists.h"
/**
 * delete_nodeint_at_index - Delete node at a specific index
 * @head: Address of a Pointer to the head node of the list.
 * @index: The Position to delete the node
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous = (*head), *node = *head;
	int idx;

	if (!(*head))
		return (-1);
	if (index == 0)
	{
		*head = node->next;
		free(node);
		return (1);
	}
	node = node->next;
	for (idx = 1; node && idx <= index; idx++)
	{
		if (idx == index - 1)
			previous = node;
		else if (idx == index)
		{
			previous->next = node->next;
			free(node);
			return (1);
		}
		node = node->next;
	}
	return (-1);
}

