#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcmp - compare length of two strings
 * @s1: first string
 * @s2: Second string
 * Return: less than or equale or greater than 0 if s1 is less than or equal
 * or greaterthan s2 respectively
 */

int _strcmp(char *s1, char *s2)
{
	int s1_size = strlen(s1);
	int s2_size = strlen(s2);

	return (s1_size - s2_size);
}
