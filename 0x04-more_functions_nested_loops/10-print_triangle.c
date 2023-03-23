
#include "main.h"

/**
 * print_triangle - print triangle using # in terminal.
 * @size: number to size of triangle
 *
 * Return: none
 */

void print_nline(int c, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(c);
	}
}

void print_triangle(int size)
{
	int i = size;


	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	while (size > 0)
	{
		print_nline(' ', size - 1);
		print_nline('#', i - size + 1);
		_putchar('\n');
		size--;
	}
}
