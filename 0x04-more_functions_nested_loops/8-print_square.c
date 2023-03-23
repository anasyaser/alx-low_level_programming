
#include "main.h"

/**
 * print_square - print square using # in terminal.
 * @size: number to size of square
 *
 * Return: none
 */

void print_square(int size)
{
	int i = size;
	int inc;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	while (size > 0)
	{
		for (inc = 0; inc < i; inc++)
		{
		_putchar('#');
		}
		_putchar('\n');
		size--;
	}
}
