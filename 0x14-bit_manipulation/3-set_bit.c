#include "main.h"

/**
 * set_bit - set the bit value to 1
 *
 * @n: pointer to integer value
 * @index: ith of bit to change
 * Return: (int) 1 if success else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index > 63)
		return (-1);

	*n |= (1 << index);

	return (1);
}
