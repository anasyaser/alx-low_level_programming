#include "main.h"

/**
 * _pow_recursion - calculate power of numbers
 *
 * @x: number to calcuate given power of it
 * @y: power assigned to number
 * Return: (int) number to given power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
