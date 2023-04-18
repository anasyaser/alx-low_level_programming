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
	free(d->name);
	free(d->owner);
	free(d);
}
