#include "main.h"

/**
 * _strlen_recursion - calculate string length recursively
 *
 * @s: Stirng to calculate its length
 * Return: int represent String length
 */

int _strlen_recursion(char *s)
{
	if (!(*s))
		return (0);

	return (1 + _strlen_recursion(s + 1));

}
