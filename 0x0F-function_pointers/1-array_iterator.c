#include "function_pointers.h"

/**
 * array_iteratior - act action on array members
 *
 * @array: array to be modified by action function
 * @size: array size
 * @action: pointer to action function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for(i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
