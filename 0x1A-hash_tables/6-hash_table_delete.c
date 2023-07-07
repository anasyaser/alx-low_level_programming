#include "hash_tables.h"

/**
 * free_linked_list - free linked list hash nodes
 *
 * @node: head of linked list
 * Return: None
 */

void free_linked_list(hash_node_t *node)
{
	hash_node_t *tmp;

	while (node)
	{
		free(node->key);
		free(node->value);
		tmp = node;
		node = node->next;
		free(tmp);
	}
}

/**
 * hash_table_delete - free memory of hash table
 *
 * @ht: pointer to hashtable
 * Return: None
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
			free_linked_list(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
