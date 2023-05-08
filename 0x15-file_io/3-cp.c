#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int fd_from;
	int fd_to;

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC);
	fd_from = open(argv[1], O_RDONLY);

	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s", argv[1]);
		exit(98);
	}

	
	return (0);
}

