/*
 * File: 102-free_listint_safe.c
 * Auth: tazy-dev
 */

#include "lists.h"
/**
 * free_listint_safe - Frees a listint_t list with a loop
 * @h: Address of a Pointer to the head node of the list.
 *
 * Return: The number of nodes in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *next;
	size_t list_len = 0;
	int check;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		/*Check if the differance in address*/
		check = (*h) - (*h)->next;
		if (check > 0)
		{
			next = (*h)->next;
			list_len++;
			free(*h);
			*h = next;
		} else
		{
			free(*h);
			*h = NULL;
			list_len++;
			break;
		}
	}
	*h = NULL;

	return (list_len);
}

