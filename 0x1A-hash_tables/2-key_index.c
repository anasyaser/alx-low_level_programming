#include "hash_tables.h"

/**
 * key_index - Get Hashtable index for key
 *
 * @key: key of pair
 * @size: size of hashtable array
 * Return: index of a key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;
	unsigned long int index;

	hash_value = hash_djb2(key);
	index = hash_value % size;

	return (index);
}
