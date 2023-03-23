
#include "main.h"

/**
 * print_diagonal - print diagonal in terminal.
 * @n: number to determine the diagonal length.
 *
 * Return: none
 */

void print_diagonal(int n)
{
	int i = n;
	int inc;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	while (n > 0)
	{
		for (inc = 0; inc < i - n; inc++)
		{
		_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		n--;
	}
}
