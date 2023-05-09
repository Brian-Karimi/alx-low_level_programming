#include "main.h"

/**
 * main - entry point
 * @argc: argument counter 3 args
 * @argv: arg size
 * Return: 0 on success
*/

int main(int argc, char *argv[])
{
	int read_fd, write_fd, index;
	char buffer[BUFFER], *file_from = argv[1], *file_to = argv[2];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	read_fd = open(argv[1], O_RDONLY);
	if (read_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	write_fd = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	index = read(read_fd, buffer, BUFFER);

	while (index > 0)
	{
		if (write_fd == -1 || write(write_fd, buffer, index) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
			close(read_fd);
			exit(99);
		}
	}
	if (index == -1)
	{
		printf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if ((close(read_fd)) == -1 || (close(write_fd)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", read_fd);
		exit(100);
	}
	return (0);
}
