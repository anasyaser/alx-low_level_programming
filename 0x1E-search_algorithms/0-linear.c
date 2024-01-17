#include "search_algos.h"

/**
 * linear_search - Linear search algorithm
 *
 * @array: array to search in
 * @size: size of elements in array
 * @value: value to search for
 * Return: index of first occurence of value else -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;


	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
