/*
 * File: 101-print_listint_safe.c
 * Auth: tazy-dev
 */

#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t list with a loop
 * @head: Pointer to the head node of the list.
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *next = head, *check = NULL;
	size_t list_len = 0, check_index;

	if (!head)
		exit(98);
	while (next)
	{
		printf("[%p] %lu\n", (void *)next, next->n);
		list_len++;
		check_index = 0;
		check = head;
		next = next->next;

		for (check_index = 0; check_index < list_len; check_index++)
		{
			if (next == check)
			{
				printf("-> [%p] %lu\n", (void *)next, next->n);
				return (list_len);
			}
			check_index++;
			check = check->next;
		}
	}
	return (list_len);
}

