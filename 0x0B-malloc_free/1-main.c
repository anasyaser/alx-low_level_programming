#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s;

	s = _strdup("anas yaser");
	if (s == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);

	}
	printf("%s\n", s);
	printf("%lu\n", strlen(s));
	free(s);
	return (0);

}
