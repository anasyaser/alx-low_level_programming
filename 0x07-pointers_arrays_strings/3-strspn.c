#include <string.h>
#include "main.h"


/**
 * _strspn - length of accepted chars in string
 * Discription: How many accepted char in string
 * @s: Char pointer  to search in it
 * @accept: Char pointer to search for in string
 * Return: unsigned int of accepted char in string
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int cnt = 0;

	while (*s && strchr(accept, *s++))
	{
		cnt++;
	}
	return cnt;

}
