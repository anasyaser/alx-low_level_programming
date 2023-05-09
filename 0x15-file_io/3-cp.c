#include "main.h"

/**
 * main - copy from file to anothe
 *
 * @argc: number of programm arguments
 * @argv: pointer to list of arguments
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int fd_from;
	int fd_to;
	char cur[1024];
	ssize_t flag = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n",
			argv[0]);
		exit(97);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}

	flag = read(fd_from, cur, 1024);
	while (flag)
	{
		if (fd_to == -1 || (write(fd_to, cur, flag)) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				argv[2]);
			exit(99);
		}
		flag = read(fd_from, cur, 1024);
	}
	if (close(fd_to) || close(fd_from))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", -1);
		exit(100);
	}
	return (0);
}

