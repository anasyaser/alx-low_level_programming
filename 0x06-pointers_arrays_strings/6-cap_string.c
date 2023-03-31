#include "main.h"

/**
 * cap_string - capitilize all words
 * @s: string to convert
 * Return: new string converted
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (*(s + i - 1) == '\n' || *(s + i - 1) == '\t')
		{
			*(s + i - 1) = ' ';
		}
		if (*(s + i - 1) == ' ' || i == 0)
		{
			if (*(s + i) > 96 && *(s + i) < 123)
			{
				*(s + i) -= 32;
			}
		}
		i++;
	}
	return (s);
}
