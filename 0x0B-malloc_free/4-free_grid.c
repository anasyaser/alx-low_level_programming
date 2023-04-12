#include <stdlib.h>
#include "main.h"


/**
 * free_grid - free 2-D array
 *
 * @grid: a 2-D arry to free
 * @height: height of array
 * Return: None
 */

void free_grid(int **grid, int height)
{
	while (height)
	{
		free(grid[height - 1]);
		height--;
	}
	free(grid);
}
