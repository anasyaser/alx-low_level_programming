#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - print the chessboard
 * @a: 2-D array represent chessboard
 * Return: None
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	while (i < 2)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
