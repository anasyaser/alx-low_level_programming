#include <string.h>
#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string pointer to reverse
 * Return: none
 */

void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1 ; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
