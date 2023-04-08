#include <stdio.h>
#include <string.h>
#include "main.h"


/**
 * is_palindrome_helper - helper to check if string is palindrome recursively
 *
 * @s: string to check if it's palindrome
 * @i: incremental number
 * Return: int (1) if palindrome else (0)
 */

int is_palindrome_helper(char *s, int i)
{
	/**
	 * Another shoreter approach is to modify the string and add '\0'
	 * every step to mark the end of text (not tested)
	 */

	if (strlen(s) == 0)
		return (1);

	if (s == (s + strlen(s) - 1 - i))
		return (1);

	if ((s + 1) == (s + strlen(s) - 1 - i))
		return (*(s) == *(s + strlen(s) - 1 - i));

	return (*(s) == *(s + strlen(s) - 1 - i) &&
		is_palindrome_helper((s + 1), (i + 1)));
}

/**
 * is_palindrome - check if string is palindrome recursively
 *
 * @s: string to check if it's palindrome
 * Return: int (1) if palindrome else (0)
 */

int is_palindrome(char *s)
{
	return (is_palindrome_helper(s, 0));
}
