#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _memset - set value at memorty address
 * Discription: fill the nth bytes of memory area pointed
 * by pointer with constant value
 * @s: pointer to reallocate
 * @b: constant value used to fill a pointer
 * @n: number of addresses to fill pointer address
 * Return: Pointer to the modified memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int inc = 0;

	while (inc < n)
	{
		s[inc] = b;
		inc++;
	}
	return (s);
}
