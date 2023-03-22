#include "main.h"

/**
 * jack_bauer - print time
 *
 * Return: display all day time in format 00:00 --> 23:59.
 */

void jack_bauer(void)
{
	int o1, o2, i1, i2;

	for (o1 = 0; o1 <= 2; o1++)
	{
		for (o2 = 0; o2 <= 9; o2++)
		{
			if (o1 == 2 && o2 == 4)
			{
				break;
			}
			for (i1 = 0; i1 <= 5; i1++)
			{
				for (i2 = 0; i2 <= 9; i2++)
				{
					_putchar(o1 + '0');
					_putchar(o2 + '0');
					_putchar(':');
					_putchar(i1 + '0');
					_putchar(i2 + '0');
					_putchar('\n');
				}
			}
		}
	}
}
