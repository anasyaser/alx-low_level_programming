#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - change cents
 *
 * @argc: number of argumets
 * @argv: pointer array to progrmme arguments
 * Return: (0) Always success
 */


int main(int argc, char *argv[])
{
	int arg = atoi(argv[1]);
	int cnt = 0;
	int avail[5] = {25, 10, 5, 2, 1};
	int i = 0;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	while (i < 5 && arg > 0)
	{
		cnt += (arg / (*(avail + i)));
		arg %= (*(avail + i));
		i++;
	}
	printf("%d\n", cnt);
	return (0);

}
