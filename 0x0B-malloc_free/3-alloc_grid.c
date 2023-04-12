#include <stdlib.h>
#include "main.h"


/**
 * alloc_grid - create 2-D array
 *
 * @width: width of array
 * @height: height of array
 * Return: 2-D array
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i = 0;

	if (width *  height <= 0)
		return (NULL);

	arr = (int **)malloc(height * sizeof(arr));

	if (arr == NULL)
		return (NULL);

	while (i < height)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			free(arr[i]);
			free(arr);
			return (NULL);
		}
		i++;
	}

	return (arr);
}
