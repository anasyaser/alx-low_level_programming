#include "main.h"

/**
 * append_text_to_file - add text to existing file
 *
 * @filename: file name to create
 * @text_content: content to add to file
 * Return: (int) 1 in success other (-1)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);
	while (*text_content)
	{
		if (write(fd, text_content, 1) == -1)
			return (-1);
		text_content++;
	}
	return (1);
}
