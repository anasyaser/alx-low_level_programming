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

/* /\** */
/*  * create_express - helper function to create express lane */
/*  * */
/*  * @list: pointer to head of linkded list */
/*  * @lan_width: number of nodes to skip */
/*  * Return: None */
/*  *\/ */

/* void create_express(skiplist_t *list, size_t lan_width) */
/* { */
/* 	skiplist_t *prev; */
/* 	skiplist_t *curr; */

/* 	prev = list; */
/* 	prev->express = list; */
/* 	curr = list->next; */
/* 	while (curr) */
/* 	{ */
/* 		printf("previous index: %ld, express: %ld\n", prev->index, */
/* 		       prev->express->index); */
/* 		printf("current index: %ld\n", curr->index); */
/* 		printf("Current next index%ld\n", curr->next->index); */

/* 		if (curr->index % lan_width == 0) */
/* 		{ */
/* 			prev->express = curr; */
/* 			prev = curr; */
/* 		} else if (!curr->next) */
/* 		{ */
/* 			prev->express = curr; */
/* 		} */
/* 		curr = curr->next; */
/* 	} */
/* } */

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
	/* size_t lan_width; */
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
