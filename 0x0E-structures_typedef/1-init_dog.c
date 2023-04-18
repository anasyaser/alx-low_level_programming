#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initalize dog variable
 *
 * @d: pointer to dog variable
 * @name: the name of dog
 * @age: dog age
 * @owner: dog owner
 * Return: None
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
