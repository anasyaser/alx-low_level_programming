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
	size_t slen = strlen(str);

	if (!str)
		return (NULL);

	pr = malloc(slen + 1);

	if (pr == NULL)
		return (NULL);

	while (i < slen)
	{
		pr[i] = *str;
		i++;
		str++;
	}
	pr[i] = '\0';

	return (pr);
}
