#include <stdio.h>
#include "list.h"

/**
 * print_list - print all the elements of a
 *              list_t list
 * @h: Input singly Linked List
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes_number = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		nodes_number++;
	}
	return (nodes_number);
}
