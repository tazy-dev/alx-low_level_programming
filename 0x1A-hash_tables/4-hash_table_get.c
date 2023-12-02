#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with
 *                  a key in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *item_head;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	item_head = ht->array[index];
	if (item_head == NULL)
		return (NULL);
	while (item_head)
	{
		if (strcmp(item_head->key, key) == 0)
			return (item_head->value);
		item_head = item_head->next;
	}
	return (NULL);
}
