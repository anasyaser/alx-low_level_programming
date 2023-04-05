#include "main.h"

/**
 * sqrt_helper - helper function to sqrt recursion
 *
 * @n: number to calculate its square
 * @i: incremental number to figure out squares
 * Return: 1 if found else 0
 */

int sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);

	if (i >= n / 2)
		return (-1);

	return (sqrt_helper(n, i + 1));
}


/**
 * _sqrt_recursion - square root of number
 *
 * @n: number to calculate its square root
 * Return: (int) square root of given number
 */

int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 1));
}
