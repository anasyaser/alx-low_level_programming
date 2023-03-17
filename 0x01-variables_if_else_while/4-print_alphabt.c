#include <stdio.h>

/**
 * main - Entry point
 * Description: print the alphabet in lowercase using putchar
 * function only except q and e
 * Return: Always (0)
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	};
	putchar(10);
	return (0);

}
