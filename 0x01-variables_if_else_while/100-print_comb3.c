#include <stdio.h>

/**
 * main - Entry point
 * Description: print all digits in form 00, ..09, 12,..89
 * Return: Always (0)
 */

int main(void)
{
	int o;
	int i;

	for (o = 48; o < 57; o++)
	{
		for (i = o+1; i <= 57; i++)
		{
			putchar(o);
			putchar(i);
			if (o != 56)
			{
				putchar(44);
				putchar(32);
			}
		}
	};
	putchar(10);
	return (0);

}
