#include "main.h"

/**
 * check_prime_helper - initialize incrementer to check primes
 *
 * @n: number to check if it is prime
 * @i: incrementer number
 * Return: int (1) if n is prime else (0)
 */

int check_prime_helper(int n, int i)
{
	if (n < 2)
		return (0);

	if (i == n)
		return (1);

	return (n % i != 0) && check_prime_helper(n, i + 1);
}

/**
 * is_prime_number - check if given number is prime
 *
 * @n: number to check if it is prime
 * Return: (1) if number is prime else (0)
 */

int is_prime_number(int n)
{
	return (check_prime_helper(n, 2));
}
