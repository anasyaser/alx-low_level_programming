#include "main.h"

/**
 * _islower - check if char is lower
 * @c: The character to check
 *
 * Return: On success 1.
 * On failure, 0 is returned.
 */

int _islower(int c)
{
	return ('a' <= c && c <= 'z');
}
