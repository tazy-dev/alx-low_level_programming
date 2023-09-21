#include <stddef.h>
#include "lists.h"

/**
 * list_len - print the number of elements of list_t list
 * @h: Input singly Linked List
 * Return: The number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t nodes_number = 0;

	while (h)
	{
		h = h->next;
		nodes_number++;
	}
	return (nodes_number);
}
