#include "main.h"

/**
 * print_binary - print integer in binary format
 *
 * @n: integer to convert
 * Return: None
 */

void print_binary(unsigned long int n)
{
	int idx;
	int flag = 0;

	for (idx = 31; idx >= 0; idx--)
	{
		if (n & (1 << idx))
		{
			flag = 1;
			_putchar('1');
		}
		else
			if (flag)
				_putchar('0');
	}
	if (!flag)
		_putchar('0');
}
