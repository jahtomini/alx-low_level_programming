#include "main.h"

/**
 * create_file - Create a file.
 *
 * @filename: The name of the file to be created.
 * @text_content: The content to be put in the file.
 *
 * Return: 1 if successful, -1 if not.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, result;

	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_RDONLY | O_TRUNC, mode);

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
