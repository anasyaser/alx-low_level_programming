#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _realloc - smae behaviour of orig. realloc
 *
 * @ptr: old memory location that need to change
 * @old_size: size of old memory location
 * @new_size: new size of new memory allocation
 * Return: pointer to new memory location
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nptr;
	int min = old_size;
	int i = 0;
	ptr = (char *)ptr;

	if (old_size > new_size)
		min = new_size;
	if (old_size == new_size)
		return (ptr);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);

	for (i; i < min && ptr != NULL; i++)
	{
		nptr[i] = ptr[i];
	}

	return ((void *)nptr);
}
