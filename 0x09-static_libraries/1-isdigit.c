#include <ctype.h>
#include "main.h"

/**
 * _isdigit - check if char is digit
 * @c: char to check
 *
 * Return: if c is digit return 1 else 0.
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	return (0);
}
