#include "main.h"

/**
 * binary_to_uint - convert binary to int
 *
 * @b: pointer of binary string
 * Return: (unsigned int) converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (!(*b > 47 && *b < 58))
			return (0);
		num = num << 1;

		if (*b == '1')
			num |= 1;
		b++;
	}
	return (num);
}
