#include "main.h"

/**
 * print_most_numbers - Disply numbers except 2 and 4
 *
 * Return: none
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
