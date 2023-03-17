#include <stdio.h>

/**
 * main - Entry point
 * Description: print the alphabet in lowercase and upper
 * using putchar function only
 * Return: Always (0)
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	};
	for (i = 65; i <= 90; i++)
	{
		putchar(i);
	};
	putchar(10);
	return (0);

}
