#include <stdlib.h>
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

/**
 * _calloc - work as malloc but with different arguments
 *
 * @nmemb: number of chuncks of specific size
 * @size: size of each chunck
 * Return: void pointer array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
<<<<<<< HEAD
	unsigned int i = 0;
=======
>>>>>>> 38d8d3fd4bf60458f720f23d158a97a4f2691303
	unsigned int comp = nmemb * size;

	if (comp <= 0)
		return (NULL);

	ptr = malloc(comp);
	if (ptr == NULL)
		return (NULL);

<<<<<<< HEAD
	while (i < comp)
	{
		ptr[i] = 0;
		i++;
	}

=======
	_memset(ptr, 0, nmemb * size);
>>>>>>> 38d8d3fd4bf60458f720f23d158a97a4f2691303
	return (ptr);
}
