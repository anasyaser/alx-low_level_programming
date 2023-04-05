#include "main.h"

/**
 * factorial - calculate factorial for positive numbers
 *
 * @n: number to calculate factorial
 * Return: (int) factorial of given number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
