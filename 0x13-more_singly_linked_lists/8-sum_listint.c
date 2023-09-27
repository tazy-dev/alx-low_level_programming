/*
 * File: 8-sum_listint.c
 * Auth: tazy-dev
 */

#include "lists.h"
/**
 * sum_listint - Sum of all the nodes data
 * @head: Pointer to the head node of the list.
 *
 * Return: The summation of listint_t list nodes data or (0) if empty
 */
int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int sum = 0;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}

