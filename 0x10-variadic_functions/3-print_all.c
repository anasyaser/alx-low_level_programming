#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_all - print all arguments of different types
 *
 * @format: character format
 * Retrun: None
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char is_valid = 0, *is_str, cur;
	va_list op;

	va_start(op, format);
	while (format && *(format + i))
	{
		cur = *(format + i);
		if (cur == 'c')
		{
			printf("%c", va_arg(op, int));
			is_valid = 1;
		} else if (cur == 'i')
		{
			printf("%d", va_arg(op, int));
			is_valid = 1;
		} else if (cur == 'f')
		{
			printf("%f", va_arg(op, double));
			is_valid = 1;
		} else if (cur == 's')
		{
			is_str = va_arg(op, char*);
			printf("%s", is_str ? is_str : "(nil)");
			is_valid = 1;
		}
		if (*(format + i + 1) != '\0' && is_valid)
		{
			printf(", ");
		}
		is_valid = 0;
		i++;
	}
	va_end(op);
	printf("\n");
}
