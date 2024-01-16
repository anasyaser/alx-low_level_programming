#include <stdio.h>
#include <math.h>

/**
 * print_array - print arrray of integers
 *
 * @array: pointer to an array to print
 * @from: index to print from
 * @to: index to stop print at
 * Return: None
 */

void print_array(int *array, size_t from, size_t to)
{
	while (from < to)
	{
		printf("%d,", array[from]);
		from++;
	}
	printf("%d\n", array[from]);
}

/**
 * jump_search - jump search algorithm
 *
 * @array: pointer to array of integers to search in
 * @size: number of elements in array
 * @value: value to search for in array
 * Return: first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	size_t l;
	size_t k;

	l = 0;
	k = (size_t) sqrt(size);
	while ((k < (size + 1)) && (array[l] < value))
	{
		printf("Value checked array[%ld] = [%d]", l, array[l]);
		l = k;
		k = k + (int) sqrt(size);
	}
	if (l > size - 1)
		return (-1);
	printf("Value found between indexes [%ld] and [%ld]", l, k);
	while (l < k)
	{
		printf("Value checked array[%ld] = [%d]", l, array[l]);
		if (l == array[l])
			return (l);
	}
	return (-1);
}
