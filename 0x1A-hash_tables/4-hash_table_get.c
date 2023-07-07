#include "hash_tables.h"

/**
 * hash_table_get - get key value
 *
 * @ht: pointer to hashtable
 * @key: key to search for
 * Return: key value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *curr;

	if (!*key || !ht)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	curr = ht->array[index];

	while (curr)
	{
		if (strcmp(curr->key, key) == 0)
			return (curr->value);
		curr = curr->next;
	}

	return (NULL);
}
