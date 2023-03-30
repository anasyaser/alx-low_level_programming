#include "main.h"

/**
 * reverse_array - reverse array in place
 * @a: Pointer to array
 * @n: Num of array elements
 * Return: None
 */

void reverse_array(int *a, int n)
{
	int mid = n / 2;
	int i = 0;

	while (i <= mid)
	{
		int tmp = a[i];

		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
		i++;
	}
}
