#include "function_pointers.h"

/**
 * int_index - Index of specific integer
 *
 * @array: array of elements
 * @size: array size
 * @cmp: func. pointer to compare array elements
 * Return: Index of first element for which cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!cmp || size <= 0 || !array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
