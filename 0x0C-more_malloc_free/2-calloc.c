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
	void *ptr;

	if (nmemb * size <= 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
