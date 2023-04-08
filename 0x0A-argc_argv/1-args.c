#include <stdio.h>

/**
 * main - print number of arguments
 *
 * @argc: number of argumets
 * @argv: pointer array to progrmme arguments
 * Return: (0) Always success
 */


int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
