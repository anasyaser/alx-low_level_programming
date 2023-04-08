#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * next_star - get next char after *
 *
 * @s: string to check
 * Return: char if found else Null
 */

char *next_star(char *s)
{
	if (!*s)
		return (NULL);

	if (*s == '*')
		return (next_star(s + 1));

	return (s);
}

/**
 * wildcmp - comparison of two string considering (*) wildcard
 *
 * @s1: first string
 * @s2: second string
 * Return: int (1) if equal else (0)
 */

int wildcmp(char *s1, char *s2)
{
	if (!(*s1) && !(*s2))
		return (1);

	if (*s2 == '*')
	{
		char *next = next_star(s2);

		if (!next)
			return (1);

		return (wildcmp(strchr(s1, *next), next));
	}
	return ((*s1 && *s2) && (*s1 == *s2) && (wildcmp((s1 + 1), (s2 + 1))));
}
