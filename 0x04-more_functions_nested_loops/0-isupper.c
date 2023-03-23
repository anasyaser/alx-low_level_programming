#include <ctype.h>
#include "main.h"

/**
 * _isupper - check if char is upper
 * @c: char to check
 *
 * Return: if c is upper return 1 else 0.
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	return (0);
}
