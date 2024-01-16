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
 * interpolation_search - interpolation search algorithm
 *
 * @array: pointer to array of integers to search in
 * @size: number of elements in array
 * @value: value to search for in array
 * Return: first index where value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	
}
