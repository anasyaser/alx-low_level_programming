#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - terminate process if malloc fails
 *
 * @b: number of bytes to allocate
 * Return: None
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
	if (!ptr)
	   exit(98);
	return (ptr);
}
