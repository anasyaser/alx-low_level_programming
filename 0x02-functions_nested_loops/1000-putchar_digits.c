#include <stdlib.h>
#include "main.h"

/**
 * add - add to interger (assume always positive)
 *
 * Return: print sum of two integer.
 */

int add(int n1, int n2)
{
	int sum = n1 + n2;
	int res;
	int den = 1;

	while (sum % 10 != sum && sum > 9)
	{
		den *= 10;
	}
	while (sum > 9)
	{
		res = sum / den;
		sum -= res * den;
		den /= 10;
		_putchar(res + '0' );
	}
	_putchar(sum + '0');

}
