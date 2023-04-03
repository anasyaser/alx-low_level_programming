#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _memcpy - copy value from source to dest  memorty address
 * Discription: fill the nth bytes of memory area pointed
 * by pointer with copied values from source
 * @dest: pointer to reallocate
 * @src: source to copy data from.
 * @n: number of addresses to fill pointer address
 * Return: Pointer to the modified memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int inc = 0;

	while (inc < n)
	{
		*(dest + inc) = src[inc];
		inc++;
	}
	return (dest)
;
}
