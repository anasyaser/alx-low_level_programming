#include "main.h"

/**
 * print_number - print numbers using _putchar only
 * @n: number to print as string.
 *
 * Return: void
 */

void print_number(int n)
{
	int i = n;
	int res;
	int den = 1;

	if (n < 0)
	{
		n = -n;
		i = n;
		_putchar('-');
	}
	while (i > 9)
	{
		den *= 10;
		i /= 10;
	}
	while (den >= 1)
	{
		res = n / den;
		n -= res * den;
		den /= 10;
		_putchar(res + '0');
	}
}
