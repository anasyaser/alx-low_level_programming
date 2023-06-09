#include "main.h"

/**
 * read_textfile - read textfile and print it
 *
 * @filename: file name to print
 * @letters: number of letters to read and print
 * Return: number of letter that will be printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t number = 0;
	char cur;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	/* need to modified to handle if read or write return -1 or error*/
	while (letters && read(fd, &cur, 1))
	{
		number += write(STDOUT_FILENO, &cur, 1);
		letters--;
	}
	close(fd);
	return (number);
}
