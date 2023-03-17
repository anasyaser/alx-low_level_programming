#include <stdio.h>

/**
 * main - Entry point
 * Description: print all digits from 0 to 9 using putchar
 * Return: Always (0)
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
	};
	putchar(10);
	return (0);

}
