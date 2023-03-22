#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print from given num to 98.
 *@n : number to start from
 *
 * Return: none
 */

void print_to_98(int n)
{
	int inc = 1;
	int cur = n;

	if (n > 98)
	{
		inc *= -1;
	}
	while (cur != 98)
	{
		printf("%d, ", cur);
		cur += inc;
	}
	printf("%d\n", 98);
}
