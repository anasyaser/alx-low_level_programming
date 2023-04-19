#include "function_pointers.h"

/**
 * print_name - print given name
 *
 * @name: name to print
 * @f: func. pointer helper to print name
 * Retrurn: None
 */

void print_name(char *name, void(*f)(char *))
{
	f(name);
}
