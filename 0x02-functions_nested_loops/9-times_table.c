#include <stdio.h>
#include "main.h"

/**
 * times_table - print time table
 *
 * Return: none .
 */

void times_table(void)
{
	int inc = 0;

	while (inc <= 9)
	{
		int lim = 0;

		for (lim; lim <= 9; lim++)
		{
			int cur = inc * lim;

			if (cur < 10)
			{
				_putchar(' ');
				_putchar(cur + '0');
			} else
			{
				_putchar(cur / 10 + '0');
				_putchar(cur % 10 + '0');
			}
			if (lim < 9)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('\n');
		inc++;
	}
}
