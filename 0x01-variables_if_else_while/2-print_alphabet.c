#include <stdio.h>

/**
 * main - Entry point
 * Description: print the alphabet in lowercase using putchar function only
 * Return: Always (0)
 */

int main(void)
{
	int i;

	for(i = 97; i <= 122; i++)
	{
		putchar(i);
	};
	putchar(10);
	return (0);

}
