#include "hash_tables.h"

/**
 * create_item - Creates a new hash node.
 * @key: The key for the node.
 * @value: The value associated with the key.
 *
 * Return: A pointer to the newly created hash node,
 *         or NULL if an error occurred.
 */

hash_node_t *create_item(const char *key, const char *value)
{
	/*Creates a pointer to a new HashTable item.*/
	hash_node_t *item = malloc(sizeof(hash_node_t));

	if (item == NULL)
		return (NULL);
	item->key = strdup(key);
	item->value = strdup(value);
	if (item->key == NULL || item->value == NULL)
	{
		free(item);
		return (NULL);
	}
	item->next = NULL;
	return (item);
}

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item, *item_head;
	unsigned long int index; /*for hash  function return value*/

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL) /*Insert in empty bucket*/
	{
		item = create_item(key, value);
		if (!item)
			return (0);
		ht->array[index] = item;
		return (1);
	}
	/*Update node*/
	item_head = ht->array[index];
	while (item_head != NULL)
	{
		if (strcmp(item_head->key, key) == 0)
		{
			free(item_head->value), item_head->value = NULL;
			item_head->value = strdup(value);
			return (1);
		}
		item_head = item_head->next;
	}
	item = create_item(key, value);
	if (!item)
		return (0);
	item->next = ht->array[index];
	ht->array[index] = item;
	return (1);
}
