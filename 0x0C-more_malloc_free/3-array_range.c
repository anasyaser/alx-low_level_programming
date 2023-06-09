#include <stdlib.h>
#include "main.h"

/**
 * array_range - create array of given range
 *
 * @min: range start of array
 * @max: range end of an array
 * Return: int array of given range
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i = 0;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	while (min <= max)
	{
		ptr[i] = min;
		min++;
		i++;
	}

	return (ptr);
}
