#include "main.h"

/**
 * print_binary - print integer in binary format
 *
 * @n: integer to convert
 * Return: None
 */

void print_binary(unsigned long int n)
{
	int idx = 63;

	while (idx)
	{
		if (n & (1 << idx))
			_putchar('1');
		else
			_putchar('0');
		idx--;
	}
}
