#include "search_algos.h"


/**
 * print_array - print arrray of integers
 *
 * @array: pointer to an array to print
 * @l: index to print from
 * @h: index to stop print at
 * Return: None
 */

void print_array(int *array, size_t l, size_t h)
{
	while (l < h)
	{
		printf("%d, ", array[l]);
		l++;
	}
	printf("%d\n", array[l]);
}

/**
 * binary_search_helper - helper function to binary search
 *
 * @array: pointer to array to search in
 * @start: first index to start search from
 * @end: last index to stop start at
 * @value: value to search for
 * Return: index if element if found else -1
 */

int binary_search_helper(int *array, size_t start, size_t end, int value)
{
	size_t m;

	if (array == NULL)
		return (-1);

	printf("Searching in array: ");
	print_array(array, start, end);

	m = (start + end) / 2;
	if (array[start] == value)
		return (start);
	else if (start == end)
		return (-1);
	if (value > array[m])
		return (binary_search_helper(array, m + 1, end, value));
	return (binary_search_helper(array, start, m, value));
}


/**
 * advanced_binary - binary search algorithm
 *
 * @array: pointer to array of integers to search in
 * @size: number of elements in array
 * @value: value to search for in array
 * Return: first index where value is located
 */

int advanced_binary(int *array, size_t size, int value)
{
	return (binary_search_helper(array, 0, size - 1, value));
}
