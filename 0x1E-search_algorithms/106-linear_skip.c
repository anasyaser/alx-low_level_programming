#include "search_algos.h"

/**
 * get_size - get the size of skiplist
 *
 * @list: pointer to head of skiplist
 * Return: size of skiplist
 */

size_t get_size(skiplist_t *list)
{
	if (list == NULL)
		return (0);
	while (list && list->next)
		list = list->next;
	return (list->index + 1);
}

/**
 * create_express - helper function to create express lane
 *
 * @list: pointer to head of linkded list
 * @lan_width: number of nodes to skip
 * Return: None
 */

void create_express(skiplist_t *list, size_t lan_width)
{
	skiplist_t *prev;
	skiplist_t *curr;

	prev = list;
	curr = list;
	while (curr)
	{
		if (!(curr->index % lan_width))
		{
			prev->express = curr;
			prev = curr;
		}
		curr = curr->next;
	}
}

/**
 * linear_skip - skiplist search algorithm
 *
 * @list: pointer to head of skiplist linkedlist
 * @value: value to search for in skiplist
 * Return: Pointer to first node where value is located
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	size_t size;
	size_t lan_width;
	skiplist_t *prev;
	skiplist_t *curr;

	size = get_size(list);
	if (!size)
		return (-1);
	lan_width = math.sqrt(size);
	create_express(list, lan_width);
}

