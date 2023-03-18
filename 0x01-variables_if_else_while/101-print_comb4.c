#include <stdio.h>

/**
 * main - Entry point
 * Description: print all digits in form 00, ..019, 123,..789
 * Return: Always (0)
 */

int main(void)
{
	int o;
	int i;
	int ii;

	for (o = 48; o < 56; o++)
	{
		for (i = o + 1; i < 57; i++)
		{
			for (ii = i + 1; ii <= 57; ii++)
			{
				putchar(o);
				putchar(i);
				putchar(ii);
				if (o != 55)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	};
	putchar(10);
	return (0);

}
