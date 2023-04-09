#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add arguments
 *
 * @argc: number of argumets
 * @argv: pointer array to progrmme arguments
 * Return: (0) Always success
 */


int main(int argc, char *argv[])
{
	int result = 0;

	while (argc-- > 1)
	{
		if (!atoi(argv[argc]) && *argv[argc] != '0')
		{
			printf("Error\n");
			return (0);
		}
		 result += atoi(argv[argc]);
	}

	printf("%d\n", result);
	return (0);

}
