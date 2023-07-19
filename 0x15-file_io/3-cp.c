#include "main.h"

/**
 * main - Entry
 *
 * @argc: number of args
 * @argv: array of args
 *
 * Return: 0 if successful, 1 if not
 */

int main(int argc, char *argv[])
{
	int fd_from = 0, fd_to = 0, closed_source = 0,
	closed_destination = 0, bytes_copied = 0;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	bytes_copied = read(fd_from, &buffer, 1024);
	write(fd_to, &buffer, bytes_copied);

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
