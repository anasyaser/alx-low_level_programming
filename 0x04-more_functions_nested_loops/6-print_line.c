#include "main.h"

/**
 * print_line - print line in terminal.
 * @n: number to determine the line length.
 *
 * Return: none
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
