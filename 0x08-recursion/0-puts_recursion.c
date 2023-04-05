#include <string.h>
#include "main.h"

/**
 * _puts_recursion - print string recursively
 *
 * @s: String to print
 * Return: None
 */

void _puts_recursion(char *s)
{
	if (strlen(s) == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
