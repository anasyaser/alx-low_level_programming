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

	if (s == NULL)
		return (0);

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
	int i = 0;
	int total_s = _strlen(s1) + _strlen(s2);

	pr = malloc(total_s + 1);

	if (pr == NULL)
		return (NULL);

	while (i < total_s)
	{
		if (i < _strlen(s1))
			pr[i] = s1[i];
		else
			pr[i] = s2[i - _strlen(s1)];
		i++;
	}
	pr[i] = '\0';

	return (pr);
}
