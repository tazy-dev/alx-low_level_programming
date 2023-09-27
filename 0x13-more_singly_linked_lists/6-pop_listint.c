/*
 * File: 6-pop_listint.c
 * Auth: tazy-dev
 */

#include "lists.h"
/**
 *  pop_listint - Pop (delete) the head node of listint_t list
 * @head: Address of a Pointer to the head node of the list.
 *
 * Return: The head node data or (0) if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *next;
	int data = 0;

	if (!(*head))
		return (0);
	next = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = next;
	return (data);
}

