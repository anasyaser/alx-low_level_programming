#include "search_algos.h"


/**
 * print_array - print arrray of integers
 *
 * @array: pointer to an array to print
 * @from: index to print from
 * @to: index to stop print at
 * Return: None
 */

void print_array(int *array, size_t l, size_t h)
{
	while (l < h)
	{
		printf("%d,", array[l]);
		l++;
	}
	printf("%d\n", array[l]);
}

/**
 * binary_search - binary search algorithm
 *
 * @array: pointer to array of integers to search in
 * @size: number of elements in array
 * @value: value to search for in array
 * Return: first index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t m;
	size_t l;
	size_t h;

	if (array == NULL)
		return (-1);
	l = 0;
	h = size - 1;
	while (l < h || l == h)
	{
		printf("Searching in array: ");
		print_array(array, l, h);
		m = (h + l) / 2;
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			h = m - 1;
		else
			return (m);

	}
	return (-1);
}
