#include <string.h>
#include "main.h"

/**
 * rev_string - reverse string
 * @s: string pointer to reverse
 * Return: none
 */

void rev_string(char *s)
{
	int i;
	int j;
	char tmp;

	i = 0;
	j = strlen(s) - 1;

	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}
