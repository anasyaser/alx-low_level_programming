#include "main.h"

/**
 * create_file - create textfile
 *
 * @filename: file name to create
 * @text_content: content of file
 * Return: (int) 1 in success other (-1)
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
	if (fd == -1)
		return (-1);

	while(*text_content)
	{
		if(write(fd, text_content, 1) == -1)
			return (-1);
		text_content++;
	}

	return (1);
}
