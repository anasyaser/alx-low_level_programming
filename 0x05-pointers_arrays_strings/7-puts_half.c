#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - print second half of string
 * @str: String to display
 * Return: none
 */

void puts_half(char *str)
{
	size_t i;
	size_t n = strlen(str) / 2;

	for (i = strlen(str) -  n ; i < (strlen(str)); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
