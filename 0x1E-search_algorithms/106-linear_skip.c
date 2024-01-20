#include "search_algos.h"
#include <math.h>

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
	while (list->next)
		list = list->next;
	return (list->index + 1);
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
	skiplist_t *prev;
	skiplist_t *curr;

	size = get_size(list);
	if (!size)
		return (NULL);
	prev = list;
	curr = list;
	while (curr->express->n < value)
	{
		printf("Value checked at index [%ld] = [%d]\n",
		       curr->express->index, curr->express->n);
		prev = curr;
		curr = curr->express;
	}
	prev = curr;
	curr = curr->express;
	printf("Value checked at index [%ld] = [%d]\n",
	       curr->index, curr->n);

	printf("Value found between indexes [%ld] and [%ld]\n", prev->index,
	       curr->index);
	while (prev != curr)
	{
		printf("Value checked at index [%ld] = [%d]\n", prev->index,
		       prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}
