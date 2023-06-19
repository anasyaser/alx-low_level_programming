#include <stdio.h>
#include <string.h>
#include "main.h"


/**
 * *_strpbrk - search for char in string
 * Discription: get a first char in string from accepted chars
 * @s: Char pointer  to search in it
 * @accept: Char pointer to search for in string
 * Return: Pointer to first match char
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s && *s != '\0')
	{
		if (strchr(accept, *s))
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
