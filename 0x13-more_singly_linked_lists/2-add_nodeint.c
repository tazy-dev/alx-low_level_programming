/*
 * File: 2-add_nodeint.c
 * Auth: tazy-dev
 */

#include "lists.h"
/**
 * add_nodeint - Add a new node to the beginning of the list
 * @head: Address of a Pointer to the head node of the list.
 * @n: The new node data
 *
 * Return: The address of the new node or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
