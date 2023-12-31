#include "lists.h"

/**
 * get_dnodeint_at_index - returns the
 * nth node of a dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the nth node
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node_index = 0;

	if (head == NULL)
		return (NULL);
	/*check for start of the list*/
	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		if (node_index++ == index)
			break;
		head = head->next;
	}
	return (head);
}
