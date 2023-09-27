/*
 * File: 100-reverse_listint.c
 * Auth: tazy-dev
 */

#include "lists.h"
/**
 * reverse_listint - Reverses a listint_t list
 * @head: Address of a Pointer to the head node of the list.
 *
 * Return: The address of the first node in the reveresed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *forward = NULL, *reverse = NULL;

	while (*head)
	{
		forward = (*head)->next;
		(*head)->next = reverse;
		reverse = *head;
		(*head) = forward;
	}
	(*head) = reverse;
	return (reverse);
}

