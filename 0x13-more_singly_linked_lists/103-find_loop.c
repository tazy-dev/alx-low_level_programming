/*
 * File: 103-find_loop.c
 * Auth: tazy-dev
 */

#include "lists.h"
/**
 * find_listint_loop - Finds the loop contained in a listint_t linked list
 * @head: Pointer to the head node of the list.
 *
 * Return: Address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *next = head, *check = head;

	if (!head)
		return (NULL);

	while (check && next && next->next)
	{
		next = next->next->next;
		check = check->next;
		if (next == check)
		{
			check = head;
			while (check != next)
			{
				check = check->next;
				next = next->next;
			}
			return (next);
		}
	}

	return (NULL);
}
