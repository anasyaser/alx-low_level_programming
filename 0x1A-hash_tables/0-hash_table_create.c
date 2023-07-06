#include "hash_tables.h"

/**
 * hash_table_create - create hash table
 *
 * @size: size of hash table
 * Return: pointer to newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_t = NULL;
	hash_node_t **array = NULL;

	new_hash_t = malloc(sizeof(hash_table_t));
	if (new_hash_t == NULL)
		return (NULL);

	new_hash_t->size = size;

	array = calloc(size, sizeof(hash_node_t));
	if (array == NULL)
	{
		free(new_hash_t);
		return (NULL);
	}
	new_hash_t->array = array;

	return (new_hash_t);
}
