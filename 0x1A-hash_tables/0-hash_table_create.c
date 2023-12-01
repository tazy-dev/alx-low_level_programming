#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_tbl ;
	unsigned long int idx = 0;

	hash_tbl = malloc(sizeof(hash_tbl));
	if (hash_tbl == NULL)
		return (NULL);
	hash_tbl->size = size;
	hash_tbl->array = malloc(sizeof(hash_node_t *) * size);
	if (!hash_tbl->array)
		return (NULL);
	for (idx; idx < size; idx++)
		hash_tbl->array[idx] = NULL;
	return (hash_tbl);
}
