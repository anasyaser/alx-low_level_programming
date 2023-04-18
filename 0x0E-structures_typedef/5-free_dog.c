#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - rlease memory allocation from dog
 *
 * @d: pointer to dog variable
 * Return: None
 */

void free_dog(dog_t *d)
{
	if (!d)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
