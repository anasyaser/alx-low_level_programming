#include "search_algos.h"
#include <math.h>

/**
 * min - return minimum of two numbers
 *
 * @first: first number
 * @second: second number
 * Return: minimum number
 */

size_t min(size_t first, size_t second)
{
	if (first < second)
		return (first);
	return (second);
}

/**
 * jump_search - jump search algorithm
 *
 * @array: pointer to array of integers to search in
 * @size: number of elements in array
 * @value: value to search for in array
 * Return: first index where value is located
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *bound_s;
	listint_t *current;
	size_t step;
	size_t i;
	size_t h;

	if (list == NULL)
		return (-1);

	step = (int) sqrt(size);
	current = list;
	bound_s = list;
	i = step;
	while (current->next && current->n < value)
	{
		while (current && i--)
			current = current->next;
		printf("Value checked array[%lu] = [%d]\n", bound_s->index,
		       bound_s->n);
	}

	while (l < min(size, h))
	{
		printf("Value checked array[%lu] = [%d]\n", l, array[l]);
		if (array[l] == value)
			return (l);
		l++;
	}
	return (-1);
}
