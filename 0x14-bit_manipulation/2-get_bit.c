#include "main.h"

/**
 * get_bit - get the ith bit value
 *
 * @n: given integer value
 * @index: the required index
 * Return: (int) bit value for ginven index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (n & (1 << index))
		return (1);
	return (0);
}
