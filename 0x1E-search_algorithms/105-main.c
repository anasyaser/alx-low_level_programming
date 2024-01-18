#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

listint_t *create_list(int *array, size_t size);
void print_list(const listint_t *list);
void free_list(listint_t *list);

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	listint_t *list, *res;
	int array[] = {
		3, 4, 5, 7, 7, 7, 8, 9, 10, 11, 21, 31, 33, 33, 33, 44, 51
	};
	size_t size = sizeof(array) / sizeof(array[0]);

	list = create_list(array, size);
	print_list(list);

	res =  jump_list(list, size, 31);
	printf("Found %d at index: %lu\n\n", 31, res->index);
	free_list(list);
	return (EXIT_SUCCESS);
}
