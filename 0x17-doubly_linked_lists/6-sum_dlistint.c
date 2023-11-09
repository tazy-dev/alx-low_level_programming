#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a doubly linked list
 *
 * @head: head of the list
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int nodes_sum = 0;

	if (head != NULL)
	{
		/*check for start of the list*/
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			nodes_sum += head->n;
			head = head->next;
		}
	}
	return (nodes_sum);
}
