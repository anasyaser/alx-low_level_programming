#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print dog attributes
 *
 * @d: pointer to dog variable
 * Return: None
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %s\n", d->age);
	printf("Owner: %s", d->owner);
}
