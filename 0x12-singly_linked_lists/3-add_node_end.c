#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Add a node to the beginning of
 *              List_t list
 * @head: A pointer to a pointer  to the list_t list
 * @str: The new string to be added
 * Return: The address of the new node
 *          or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	int str_len = 0;

	if (!(*head))
	{
		while (str[str_len])
			str_len++;

		new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);

		new->str = strdup(str);
		new->len = str_len;
		new->next = NULL;
		*head = new;
		return (new);
	}else
		return(add_node_end(&((*head)->next), str));
}
