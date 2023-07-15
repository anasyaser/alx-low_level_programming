#include "hash_tables.h"

/**
 * shash_table_create - create sorted hash table
 *
 * @size: size of hash table
 * Return: pointer to newly created hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_hash_t = NULL;
	shash_node_t **array = NULL;

	new_hash_t = malloc(sizeof(hash_table_t));
	if (new_hash_t == NULL)
		return (NULL);

	new_hash_t->size = size;

	array = calloc(sizeof(shash_node_t *), size);
	if (array == NULL)
	{
		free(new_hash_t);
		return (NULL);
	}
	new_hash_t->array = array;

	return (new_hash_t);

}
