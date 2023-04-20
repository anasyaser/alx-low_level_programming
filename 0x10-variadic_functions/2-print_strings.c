#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print all argment numbers
 *
 * @separator: separator between numbers
 * @n: number of integers to print
 * Return: None
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list op;
	char *cur_str;

	if (n == 0)
		return;

	va_start(op, n);

	for (i = 0; i < n; i++)
	{
		cur_str = va_arg(op, char*);

		if (cur_str && *cur_str)
			printf("%s", cur_str);
		else
			printf("(nil)");

		if (separator && i < n - 1)
			printf("%s", separator);
	}
	va_end(op);
	printf("\n");
}
