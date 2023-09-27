/*
 * File: 3-add_nodeint_end.c
 * Auth: tazy-dev
 */

#include "lists.h"
/**
 * add_nodeint_end - Add a new node to the ending of the list
 * @head: Address of a Pointer to the head node of the list.
 * @n: The new node data
 *
 * Return: The address of the new node or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	if (!(*head))
	{
		new = malloc(sizeof(listint_t));
		if (!new)
			return (NULL);
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	return (add_nodeint_end(&((*head)->next), n));
}

