#include "search_algos.h"

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
	size_t mid;

	mid = size / 2;
	if (value == array[mid])
		return (mid);
	else if (value > array[mid])
		return binary_search(array + mid + 1, size - mid, value);
	else if(value < array[mid])
		return binary_search(array, size - mid, value);

}
