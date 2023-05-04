#include "main.h"

/**
 * clear_bit - set the bit value to 0
 *
 * @n: pointer to integer value
 * @index: ith of bit to change
 * Return: (int) 1 if success else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index > 63)
		return (-1);
	/* or *n &= ~(i << index) */
	if (*n & (1 << index))
		*n ^= (1 << index);

	return (1);
}
