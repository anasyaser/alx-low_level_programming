#include "main.h"

/**
 * _pow - retunr number power to given int
 *
 * @num: number
 * @power: given power
 * Return: numbert to given power
 */

int _pow(int num, int power)
{
	int result = 1;

	while (power)
	{
		result *= num;
		power--;
	}
	return (result);
}

/**
 * binary_to_uint - convert binary to int
 *
 * @b: pointer of binary string
 * Return: (unsigned int) converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int len = strlen(b);

	if (!b)
		return (0);

	while (*b)
	{
		if ((*b - 48) > 1)
			return (0);

		num += _pow(2, (len - 1)) * (*b - 48);
		len--;
		b++;
	}
	return (num);
}
