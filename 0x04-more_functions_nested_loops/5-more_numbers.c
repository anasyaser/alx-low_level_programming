#include "main.h"

/**
 * more_numbers - Disply numbers from 1 to 14.
 *
 * Return: none
 */

void more_numbers(void)
{
	int i;
	int inc;

	i = 10;
	while (i--)
	{
		for (inc = 0; inc < 15; inc++)
		{
			if (inc > 9)
				_putchar(inc / 10 + '0');
			_putchar(inc % 10 + '0');
		}
		_putchar('\n');
	}
}
