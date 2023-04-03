#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strchr - get specific char from string
 * Discription: get a pointer from string to a specific char
 * @s: pointer to string to search in
 * @c: char to search for in string
 * Return: Pointer to required char or null if not found
 */

char *_strchr(char *s, char c)
{
	if (c == '\0')
	{
		return (s);
	}
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
