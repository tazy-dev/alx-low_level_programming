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
	hash_table_t *hash_tbl;
	unsigned long int idx;

	hash_tbl = malloc(sizeof(hash_table_t));
	if (hash_tbl == NULL)
		return (NULL);
	hash_tbl->size = size;
	hash_tbl->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_tbl->array == NULL)
		return (NULL);
	for (idx = 0; idx < size; idx++)
		hash_tbl->array[idx] = NULL;
	return (hash_tbl);
}
