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
 * str_concat - concatentate two strings to new memory location
 *
 * @s1: first string
 * @s2: second string
 * Return: pointer to an array of new memory allocation containing new string
 */

char *str_concat(char *s1, char *s2)
{
	char *pr;
	int i;

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
