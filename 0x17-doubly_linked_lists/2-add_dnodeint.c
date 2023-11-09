#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *tmp = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	/*if not at the beginning*/
	if ((*head) != NULL)
	{
		while ((tmp->prev != NULL))
			tmp = tmp->prev;
	}
	new->next = tmp;
	if (tmp != NULL)
		tmp->prev = new;
	(*head) = new;
	return (new);
}
