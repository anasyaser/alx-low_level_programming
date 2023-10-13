#include "search_algos.h"

/**
 * interpolation_search - Interpolation Search Algorithm
 *
 * @array: pointer to array of integers
 * @size: number of elements in array
 * @value: value to search for
 * Return: Index of serched value in array else -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t l;
	size_t h;
	size_t pos;

	l = 0;
	h = size - 1;

	if (!array)
		return (-1);
	while (array[l] != array[h] && l != h)
	{
		pos = l + (((double)(h - l) /
			    (array[h] - array[l])) * (value - array[l]));
		if (pos > h || pos < l)
		{
			printf("Value checked array[%lu] is out of range\n",
			       pos);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (value > array[pos])
			l = pos + 1;
		else if (value < array[pos])
			h = pos - 1;
		else
			return (pos);
	}
	if (value == array[l])
		return (l);
	return (-1);
}
