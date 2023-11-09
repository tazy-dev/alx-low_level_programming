#include "lists.h"

/**
 * dlistint_len - returns the number of elements in
 * a double linked list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int nodes_num = 0;

	if (!h)
		return (nodes_num);
	/*in case h is not the first node*/
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		nodes_num++;
		h = h->next;
	}
	return (nodes_num);
}
