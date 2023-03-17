#include <stdio.h>

/**
 * main - Entry point
 * Description: print the alphabet in lowercase in reverse
 * using putchar function only
 * Return: Always (0)
 */

int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	};
	putchar(10);
	return (0);

}
