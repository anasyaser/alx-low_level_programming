#include <stdlib.h>
#include "main.h"

/**
 * _calloc - work as malloc but with different arguments
 *
 * @nmemb: number of chuncks of specific size
 * @size: size of each chunck
 * Return: void pointer array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i = 0;
	unsigned int comp = nmemb * size;

	if (comp <= 0)
		return (NULL);

	ptr = malloc(comp);
	if (ptr == NULL)
		return (NULL);

	while (i < comp)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
