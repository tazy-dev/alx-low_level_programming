#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *head;
	unsigned long int i;
	short seperator = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size - 1; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (seperator)
				printf(", ");
			head = ht->array[i];
			seperator = 0;
			while (head != NULL)
			{
				printf("'%s': '%s'", head->key, head->value);
				head = head->next;
				if (head != NULL)
					printf(", ");
			}
			seperator = 1;
		}
	}
	printf("}\n");
}
