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
	while (l < h)
	{
		printf("%d,", array[l]);
		l++;
	}
	printf("%d\n", array[l]);
}

/**
 * binary_search - Binary search algorithm
 *
 * @array: array of elements to search in
 * @size: number of array elements
 * @value: element to search for
 * Return: index of searched element if found else -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t m;
	size_t l;
	size_t h;

	if (!array)
		return (-1);
	l = 0;
	h = size - 1;
	while (l < h || l == h)
	{
		printf("Searching in array: ");
		print_array(array, l, h);
		m = (l + h) / 2;
		if (value > array[m])
			l = m + 1;
		else if (value < array[m])
			h = m - 1;
		else
			return (m);
	}
	return (-1);
}
