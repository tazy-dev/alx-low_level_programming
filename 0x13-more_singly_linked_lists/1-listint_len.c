/*
 * File: 1-listint_len.c
 * Auth: tazy-dev
 */

#include "lists.h"
/**
 * listint_len - Returns the number of elements in listint_t list
 * @h: Pointer to the head node of the list.
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}
	return (num);
}
