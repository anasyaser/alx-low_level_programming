#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two number
 *
 * @argc: number of argumets
 * @argv: pointer array to progrmme arguments
 * Return: (0) Always success
 */


int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);

}
