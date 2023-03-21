#include "main.h"

/**
 * print_sign - check the sign of integer
 * @c: The int to check
 *
 * Return: if integer is positive print '+' and return 1
 * IF integer is 0 print '0' and return 0
 *
 * On failure, 0 is returned.
 */

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	} else if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
