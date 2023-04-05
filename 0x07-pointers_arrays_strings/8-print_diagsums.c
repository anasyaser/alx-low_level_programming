#include <stdio.h>

/**
 * print_diagsums - calculate sum of diagonals of square matrix
 * @a: pointer to array
 * @size: size of matrix
 * Return: None
 */

void print_diagsums(int *a, int size)
{
	int lsum = 0;
	int rsum = 0;

	int i = 0;

	while (i < size)
	{
		lsum += *(a + (i * size) + i);
		rsum += *(a + (i * size) + (size - i - 1));
		i++;
	}
	printf("%d, %d\n", lsum, rsum);
}
