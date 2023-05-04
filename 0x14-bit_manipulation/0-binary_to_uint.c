#include "main.h"

/**
 * _strlen - lenght of string
 *
 * @s: pointer to string
 * Return: (int) length of string
 */

int _strlen(const char *s)
{
	int cnt = 0;

	while (*s)
	{
		cnt++;
		s++;
	}
	return (cnt);
}

/**
 * binary_to_uint - convert binary to int
 *
 * @b: pointer of binary string
 * Return: (unsigned int) converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int len = _strlen(b);
	int idx = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if ((*b - 48) > 1)
			return (0);
		if (*b == '1')
			num |= (1 << (len - 1 - idx));
		idx++;
		b++;
	}
	return (num);
}
