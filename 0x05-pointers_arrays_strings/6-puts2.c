#include <string.h>
#include "main.h"

/**
 * puts2 - print half of string one one
 * @str: String to display
 * Return: none
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < (strlen(str) - 1); i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
