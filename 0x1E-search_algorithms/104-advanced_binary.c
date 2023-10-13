#include "search_algos.h"

/**
 * print_array - print array elments
 *
 * @array: pointer to array
 * @l: lower bound to start from
 * @h: higher bound to end at
 * Return: None
 */

void print_array(int *array, size_t l, size_t h)
{
	size_t i;

	for (i = l; i < h + 1; i++)
	{
		printf("%d", array[i]);
		if (i != h)
			printf(", ");
	}
	printf("\n");
}


/**
 * advanced_binary_helper - helper function for advanced binary
 *
 * @array: pointer to array
 * @l: lower index to search in specific range
 * @h: higher index of specific range
 * @size: number of elements in array
 * @value: value to search for
 * Return: 1 if found else -1
 */

int advanced_binary_helper(int *array, size_t l, size_t h, size_t size,
			   int value)
{
	size_t m;

	m = (h + l) / 2;
	if (size == 0)
		return (-1);
	printf("Searching in array: ");
	print_array(array, l, h);

	if (array[m - 1] == array[m] && value == array[m])
		return advanced_binary_helper(array, l, m, size - m - 1,
					      value);
	else if (value > array[m])
		return advanced_binary_helper(array, m + 1, h, h - m,
					      value);
	else if (value == array[m])
		return (m);
	return (-1);
}

/**
 * advanced_binary - Binary search algorithm
 *
 * @array: array of elements to search in
 * @size: number of array elements
 * @value: element to search for
 * Return: index of searched element if found else -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (advanced_binary_helper(array, 0, size - 1, size, value));

}
