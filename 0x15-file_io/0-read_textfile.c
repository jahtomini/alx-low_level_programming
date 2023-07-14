#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Read the content of a file.
 * @filename: Pointer to the file.
 * @letters: Number of letters to be read.
 *
 * Return: Number of bytes read from the file.
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (!filename)
		return (0);

	int file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	char *buffer = malloc(sizeof(char) * (letters + 1));

	if (!buffer)
	{
		close(file);
		return (0);
	}

	ssize_t read_bytes = read(file, buffer, letters);

	if (read_bytes == -1)
	{
		close(file);
		free(buffer);
		return (0);
	}

	ssize_t written_bytes = write(STDOUT_FILENO, buffer, read_bytes);

	if (written_bytes == -1 || written_bytes != read_bytes)
	{
		close(file);
		free(buffer);
		return (0);
	}

	close(file);
	free(buffer);
	return (read_bytes);
}
