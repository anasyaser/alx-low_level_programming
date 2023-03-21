#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - last digit of number.
 * @c: The int to maintain
 *
 * Return: last digit of int.
 */

int print_last_digit(int c)
{
	int last;

	last = c % 10;
	_putchar(abs(last) + '0');
	return (abs(last));
}
