#include "main.h"

/**
 * main - copy from file to anothe
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int fd_from;
	int fd_to;
	char cur;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n",
			argv[0]);
		exit(97);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 00664);
	fd_from = open(argv[1], O_RDONLY);

	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}

	while (read(fd_from, &cur, 1))
	{
		if (fd_to == -1 || (write(fd_to, &cur, 1)) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				argv[2]);
			exit(99);
		}
	}
	if (close(fd_to))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_to);
	}
	if (close(fd_from))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_from);
	}
	return (0);
}

