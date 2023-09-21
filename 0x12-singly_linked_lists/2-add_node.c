#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Add a node to the beginning of
 *              list_t list
 * @head: A pointer to a pointer  to the list_t list
 * @str: The new string to be added
 * Return: The address of the new node
 *	   or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int str_len = 0;

	while (str[str_len])
		str_len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = str_len;
	new->next = (*head);
	(*head) = new;
	return (*head);

}
