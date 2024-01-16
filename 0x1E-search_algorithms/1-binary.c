#include <stdio.h>


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

/* /\** */
/*  * binary_search_helper - helper function to binary search */
/*  * */
/*  * @array: pointer to array to search in */
/*  * @start: first index to start search from */
/*  * @end: last index to stop start at */
/*  * Return: index if element if found else -1 */
/*  *\/ */

/* int binary_search_helper(int *array, size_t start, size_t end, int value) */
/* { */
/* 	size_t m; */

/* 	printf("Searching in array: "); */
/* 	print_array(array, start, end); */

/* 	m = (end - start) / 2; */
/* 	if (value == array[m]) */
/* 	{ */
/* 		printf("Found %d at index: %ld\n", value, m); */
/* 		return (m); */
/* 	} else if (value > array[m]) */
/* 	{ */
/* 		return binary_search_helper(array, m + 1, end, value); */
/* 	} else if (value < array[m]) */
/* 	{ */
/* 		return binary_search_helper(array, start, m - 1, value); */
/* 	} */

/* } */


/**
 * binary_search - binary search algorithm
 *
 * @array: pointer to array of integers to search in
 * @size: number of elements in array
 * @value: value to search for in array
 * Return: first index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t m;
	size_t l;
	size_t h;

	if (array == NULL)
		return (-1);
	l = 0;
	h = size - 1;
	while (l < h || l == h)
	{
		printf("Searching in array: ");
		print_array(array, l, h);
		m = (h + l) / 2;

		if (array[m] == value)
		{
			return (m);
		} else if (array[m] < value)
		{
			l = m + 1;
		} else if (array[m] > value)
		{
			h = m - 1;
		}
	}
	return (-1);
}
