#include "main.h"
/**
 * print_alphabet - print alphabet
 * Description: print all alphabet in lowercase using puchar func only.
 * Return : void (none)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
