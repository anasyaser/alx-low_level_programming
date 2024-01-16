#include <stdio.h>


/**
 * print_array - print arrray of integers
 *
 * @array: pointer to an array to print
 * @from: index to print from
 * @to: index to stop print at
 * Return: None
 */

void print_array(int *array, size_t from, size_t to)
{
	while (from < to)
	{
		printf("%d,", array[from]);
		from++;
	}
	printf("%d\n", array[from]);
}

/**
 * binary_search_helper - helper function to binary search
 *
 * @array: pointer to array to search in
 * @start: first index to start search from
 * @end: last index to stop start at
 * Return: index if element if found else -1
 */

int binary_search_helper(int *array, size_t start, size_t end, int value)
{
	size_t m;

	if (array == NULL || end < start)
		return (-1);

	printf("Searching in array: ");
	print_array(array, start, end);

	/* if (start == end) */
	/* { */
	/* 	if (array[start] == value) */
	/* 		return (start); */
	/* 	else */
	/* 		return (-1); */
	/* } */

	m = (start + end) / 2;
	if (value > array[m])
	{
		return binary_search_helper(array, m + 1, end, value);
	} else if (value < array[m])
	{
		return binary_search_helper(array, start, m - 1, value);
	} else
	{
		if (m == 0 || array[m - 1] != value)
			return (m);
		return (binary_search_helper(array, start, m, value));
	}
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
