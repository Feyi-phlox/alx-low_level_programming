#include "main.h"

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output
 * @letters: number of letters it to be read and printed
 * @filename: pointer to filename
 * Return: actual number of letters or 0 if filename == NULL and if write fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t read_bytes, written_bytes;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);

	read_bytes = read(fd, buffer, letters);

	written_bytes = write(STDOUT_FILENO, buffer, read_bytes);

	free(buffer);
	close(fd);
	return (written_bytes);
}
