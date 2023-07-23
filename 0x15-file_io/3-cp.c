#include "main.h"

/**
 * main - Entry.
 *
 * @argc: Number of args.
 * @argv: Array of args.
 *
 * Return: 0 if successful, 1 if not.
 */

int main(int argc, char *argv[])
{
	int fd_from = 0, fd_to = 0, closed_source = 0,
	closed_destination = 0, bytes_copied = 0, dest_fd = 0;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	bytes_copied = read(fd_from, &buffer, 1024);

	check_file(bytes_copied, argv[1], 'r');

	while (bytes_copied > 0)
	{
		dest_fd = write(fd_to, &buffer, bytes_copied);
		check_file(dest_fd, argv[2], 'w');
		bytes_copied = read(fd_from, &buffer, 1024);
		check_file(bytes_copied, argv[1], 'r');
		fd_to = open(argv[2], O_WRONLY | O_APPEND);
	}

	closed_source = close(fd_from);
	closed_destination = close(fd_to);

	if (closed_source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	else if (closed_destination == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}


/**
 * check_file - Checks the readability or writability of a file.
 *
 * @fildes: The file descriptor.
 * @name: The file's name.
 * @attempt: w for a write attempt and r for a read attempt.
 *
 * Return: Nothing.
*/
void check_file(int fildes, char *name, char attempt)
{
	if (fildes == -1 && attempt == 'r')
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", name);
		exit(98);
	}
	else if (fildes == -1 && attempt == 'w')
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", name);
		exit(99);
	}
}
