/*
 * File: 5-free_listint2.c
 * Auth: tazy-dev
 */

#include "lists.h"
/**
 * free_listint2 - Free listint_t list
 * @head: Address of a Pointer to the head node of the list.
 *
 * Return: The address of the new node or NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;
	while (*head)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	*head = NULL;
}

