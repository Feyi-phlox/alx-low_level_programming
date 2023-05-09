#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename:  is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int written_bytes;
	int text_len = 0;

	if (filename == NULL)
		return (-1);


	if (text_content != NULL)
	{
		for (; text_content[text_len];)
			text_len++;
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_len > 0)
	{
		written_bytes = write(fd, text_content, text_len);
		if (written_bytes == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

