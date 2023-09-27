/*
 * File: 4-free_listint.c
 * Auth: tazy-dev
 */

#include "lists.h"
/**
 * free_listint - Free listint_t list
 * @head: Pointer to the head node of the list.
 *
 * Return: The address of the new node or NULL
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head)
	{
		next = head->next;
		free(head);
		head = next;
	}
}

