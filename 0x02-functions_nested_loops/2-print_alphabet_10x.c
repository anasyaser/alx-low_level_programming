#include "main.h"
/**
 * print_alphabet - print alphabet
 * Description: print all alphabet in lowercase using puchar func only 10x.
 * Return : void (none)
 */
void print_alphabet_10x(void)
{
	int x = 0;

	while (x < 10)
	{
		int i;

		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar(10);
		x++;
	}
}
