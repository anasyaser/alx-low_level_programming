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

int jump_search(int *array, size_t size, int value)
{
	size_t l;
	size_t step;
	size_t h;

	step = (int)sqrt(size);
	l = 0;
	h = 0;

	if (array == NULL)
		return (-1);

	while (h < size)
	{
		if (array[h] >= value)
			break;
		printf("Value checked array[%lu] = [%d]\n", h, array[h]);
		l = h;
		h = h + step;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", l, h);

	while (l < min(size, h))
	{
		printf("Value checked array[%lu] = [%d]\n", l, array[l]);
		if (array[l] == value)
			return (l);
		l++;
	}
	return (-1);
}
