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

/**
 * min - get minimum of two numbers
 *
 * @first: first number
 * @second: second number
 * Return: minmum number
 */

size_t min(size_t first, size_t second)
{
	if (first < second)
		return (first);
	return (second);
}

/**
 * exponential_search - Interpolation Search Algorithm
 *
 * @array: pointer to array of integers
 * @size: number of elements in array
 * @value: value to search for
 * Return: Index of serched value in array else -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t u;
	int sr;

	if (!size)
		return (-1);
	u = 1;
	while (u < size && array[u] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", u, array[u]);
		u = u * 2;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
	       u / 2, min(size - 1, u));
	if (u > size - 1)
		sr = binary_search(array + u / 2, size - (u / 2), value);
	else
		sr = binary_search(array + (u / 2), u - (u / 2) + 1, value);
	if (sr != -1)
		return ((u / 2) + sr);
	return (sr);
}
