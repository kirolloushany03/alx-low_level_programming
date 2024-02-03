#include "hash_tables.h"
/**
 * hash_table_get - Retrieves the value associated with a key in a hash table.
 * @ht: The hash table to search.
 * @key: The key to search for.
 *
 * Return: The value associated with the key, or NULL if the key is not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *head;

	if (!ht)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	head = ht->array[idx];
	if (!head)
	{
		return (NULL);
	}
	else
		for (; head; head = head->next)
			if (!strcmp(head->key, key))
				return (head->value);
	return (NULL);
}
