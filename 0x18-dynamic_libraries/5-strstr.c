#include <stdio.h>
#include <string.h>
#include "main.h"


/**
 * *_strstr - return substring of speicifc string
 * Discription: find specific substring in string
 * @haystack: Char pointer  to search in it
 * @needle: Char pointer to search for in string
 * Return: Pointer to substring match
 */

char *_strstr(char *haystack, char *needle)
{
	int s_len = strlen(needle);

	if (s_len == 0)
		return (haystack);

	while (*(haystack + s_len - 1))
	{
		if (strchr(haystack, *needle))
		{
			int i = 0;

			while (*(haystack + i) == *(needle + i))
			{
				if (i == s_len - 1)
					return (haystack);
				i++;
			}
		}
		haystack++;
	}
	return (NULL);
}
