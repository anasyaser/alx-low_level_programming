#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: Determine if a random number is Positive or negative
 * Return: Always (0)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%ld is positive\n");
	}
	else if (n < 0)
	{
		printf("%ld is negative\n");
	}
	else
	{
		printf("%ld is zero\n");
	}
	return (0);
}
