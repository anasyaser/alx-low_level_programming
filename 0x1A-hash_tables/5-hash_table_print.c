#include "hash_tables.h"

/**
 * print_linked_list - print linked list
 *
 * @node: head node of linked list
 * Return: None
 */
void print_linked_list(hash_node_t *node)
{
	while (node)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->next;
		if (node)
			printf(", ");
	}
}

/**
 * hash_table_print - print hash table in order
 *
 * @ht: pointer to hash table
 * Return: None
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *curr_hash_node;
	unsigned long int i = 0;
	int first = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		curr_hash_node = ht->array[i];
		if (curr_hash_node)
		{
			if (first)
				printf(", ");
			first = 1;
			print_linked_list(curr_hash_node);
		}
	}
	printf("}\n");
}
