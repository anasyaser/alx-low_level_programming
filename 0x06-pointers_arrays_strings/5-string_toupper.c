#include "main.h"

/**
 * string_toupper - convert string to upper
 * @s: string to convert
 * Return: new string converted
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (*s > 96 && *s < 123)
		{
			*s -= 32;
		}
		i++;
	}
	return (s);
}
