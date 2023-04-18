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
	if (!d)
		return;

	printf("Name: %s\n", (d->name) ? d->name : "(nil)");
	if (d->age)
	{
		printf("Age: %.1f\n", d->age);
	} else
	{
		printf("Age: %s\n", "(nil)");
	}
	printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
}
