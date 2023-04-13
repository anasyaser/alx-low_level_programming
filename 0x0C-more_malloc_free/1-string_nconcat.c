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
 * string_nconcat - concate two string with specifc n chars
 *(You can use strcpy to make it much easier but i will not here)
 * @s1: first string to append to it
 * @s2: second string to copy n chars from it
 * @n: number of char to slice from s2
 * Return: Modified string after concatenating
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int size_1 = _strlen(s1);
	int size_2 = n;
	char *ptr;
	int i = 0;

	if ((int)n > _strlen(s2))
		size_2 = _strlen(s2);

	if (s1 == NULL)
		s1 = "";

	ptr = malloc((size_1 + size_2) * sizeof(char) + 1);

	if (ptr == NULL)
		return (NULL);

	while (i < (size_1 + size_2))
	{
		if (i < size_1)
		{
			ptr[i] = s1[i];
		} else
		{
			ptr[i] = s2[i - size_1];
		}
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
