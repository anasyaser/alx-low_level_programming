#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - copy string to  an array using malloc
 *
 * @str: string to copy
 * Return: pointer to an array of new memory allocation
 */

char *_strdup(char *str)
{
	char *pr;
	size_t i;

	if (!str)
		return (NULL);

	pr = malloc(strlen(str) + 1);

	if (pr == NULL)
		return (NULL);

	while (i < strlen(str))
	{
		pr[i] = str[i];
		i++;
	}
	pr[i] = '\0';

	return (pr);
}
