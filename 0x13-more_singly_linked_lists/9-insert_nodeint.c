/*
 * File: 9-insert_nodeint.c
 * Auth: tazy-dev
 */

#include "lists.h"
/**
 * insert_nodeint_at_index - Sum of all the nodes data
 * @head: Address of a Pointer to the head node of the list.
 * @idx: The Position to insert the node
 * @n: The inserted node data
 * Return: The address of the inserted node or (NULL) if allocation failed
 *          or a node can't be inserted (index > list length)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *node = *head;
	int index = 0;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = node;
		*head = new;
		return (new);
	}
	node = node->next;
	for (index = 1; node && index < idx; index++)
	{
		if (index == idx - 1)
		{
			new->next = node->next;
			node->next = new;
			return (new);
		}
		node = node->next;
	}
	return (NULL);
}

