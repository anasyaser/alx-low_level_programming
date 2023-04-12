#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - return length of string
 *
 * @s: string to get its length
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}

/**
 * _strdup - copy string to  an array using malloc
 *
 * @str: string to copy
 * Return: pointer to an array of new memory allocation
 */

char *_strdup(char *str)
{
	char *pr;
	int i = 0;

	if (!str)
		return (NULL);

	pr = malloc(_strlen(str) + 1);

	if (pr == NULL)
		return (NULL);

	while (i < _strlen(str))
	{
		pr[i] = str[i];
		i++;
	}
	pr[i] = '\0';

	return (pr);
}
