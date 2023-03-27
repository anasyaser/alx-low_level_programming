#include "main.h"

/**
 * swap_int - swap values of two pointers
 * @a: first parameter to swap
 * @b: second pointers to swap
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
