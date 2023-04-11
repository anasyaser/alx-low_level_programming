#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array using malloc
 *
 * @size: size of array
 * @c: intialize array with this char
 * Return: pointer to an array
 */

char *create_array(unsigned int size, char c)
{
	char *pr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	pr = malloc(sizeof(char) * size);

	if (pr == NULL)
		return (NULL);

	while (i < size)
	{
		pr[i] = c;
		i++;
	}

	return (pr);
}
