#include "main.h"

/**
 * flip_bits - number of bits changed to change given number
 *
 * @n: pointer to integer value
 * @m: number needed to be after chane n
 * Return: (int) number of changed bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int tmp = n ^ m;
	unsigned int cnt = 0;
	int i;

	if (tmp == 0)
		return (cnt);
	for (i = 0; i < 32; i++)
	{
		if (tmp & (1 << i))
			cnt++;
	}

	return (cnt);
}
