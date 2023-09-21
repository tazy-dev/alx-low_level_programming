#include <stdlib.h>
#include "list.h"

/**
 * free_list - Free space allocated by List_t list
 * @head: Input singly Linked List
 */
void free_list(list_t *head)
{
	list_t *next;

	while (head)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}

}
