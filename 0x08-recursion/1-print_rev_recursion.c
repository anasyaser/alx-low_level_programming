#include <string.h>
#include "main.h"

/**
 * _puts_recursion - print string recursively but in reverse
 *
 * @s: String to print
 * Return: None
 */

void _print_rev_recursion(char *s)
{
	if (!(*s))
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
