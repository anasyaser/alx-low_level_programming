#include <stdio.h>

/**
 * main - Entry point
 * Description: print all digits from 0 to 16 as base 16 using putchar
 * Return: Always (0)
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	};

	for (i = 97; i <= 102; i++)
	{
		putchar(i);
	};
	putchar(10);
	return (0);

}
