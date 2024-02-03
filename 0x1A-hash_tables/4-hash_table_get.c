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
	char *compare_key;
	unsigned long int index;
hash_node_t *current_node;

	if (*key == '\0')
	{
	return (NULL);
	}

	/*calculate index*/

	index = key_index((const unsigned char *)key, ht->size);

	/*initialize current_node for iteration*/
	current_node = ht->array[index];

	/*Traverse the linked list*/
	while (current_node)
	{
	/*compare keys*/
	compare_key = current_node->key;
	if (strcmp(compare_key, key) == 0)
	{
		/*Key found, return its value*/
		return (current_node->value);
	}
	current_node = current_node->next;
	}

	/*Key not found, return NULL*/
	return (NULL);
}
