/*
 * File: 7-get_nodeint.c
 * Auth: tazy-dev
 */

#include "lists.h"
/**
 *  get_nodeint_at_index - Pop (delete) the head node of listint_t list
 * @head: Pointer to the head node of the list.
 * @index: The node index in listint_t list
 *
 * Return: The node Address at that index or (NULL) if dosen't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int ind = 0;

	while (node && ind < index)
	{
		ind++;
		node = node->next;
	}
	return (node ? node : NULL);
}

