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
		if (*(s + i) > 96 && *(s + i) < 123)
		{
			*(s + i) -= 32;
		}
		i++;
	}
	return (s);
}
