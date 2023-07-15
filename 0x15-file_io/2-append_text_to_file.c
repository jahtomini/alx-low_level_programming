#include "main.h"

/**
 * append_text_to_file - Add text to the end of a file.
 *
 * @filename: Name of the file.
 * @text_content: Null-terminated string containing the file's content.
 *
 * Return: 1 if successful -1, if not.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, result;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		perror("open");
		return (-1);
	}

	if (text_content != NULL)
	{
		size_t len = strlen(text_content);

		result = write(fd, text_content, len);

		if (result == -1)
		{
			perror("write");
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
