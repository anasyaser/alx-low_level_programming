#include "hash_tables.h"

hash_node_t *create_hash_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);

	new_node->key = malloc(strlen(key) + 1);
	new_node->value = malloc(strlen(value) + 1);
	if (new_node->key == NULL || new_node->value == NULL)
		return (NULL);
	strcpy(new_node->key, key);
	strcpy(new_node->value, value);
	new_node->next = NULL;

	return (new_node);
}

/**
 * hash_table_set - set value at hash table
 *
 * @ht: pointer to hash table
 * @key: key
 * @value: key value
 * Return: 1 if success else 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index;
	hash_node_t *at_index_node;

	if (!*key)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	at_index_node = ht->array[index];
	while(at_index_node)
	{
		if (strcmp(at_index_node->key, key) == 0)
		{
			at_index_node->value = malloc(sizeof(strlen(value)) + 1);
			if (at_index_node->value == NULL)
				return (0);
			strcpy(at_index_node->value, value);
			return (1);
		}
		at_index_node = at_index_node->next;
	}
	new_node = create_hash_node(key, value);
	if (new_node == NULL)
		return (0);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
