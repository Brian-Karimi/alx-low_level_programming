#include "main.h"

/**
 * main - entry point
 * @argc: argument counter 3 args
 * @argv: arg size
 * Return: 0 on success
*/

int main(int argc, char *argv[])
{
	int src_file, dest_file, source_read;
	char buffer[BUFFER];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp src_file dest_file\n");
		exit(97);
	}
	src_file = open(argv[1], O_RDONLY);
	if (src_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	dest_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	source_read = read(src_file, buffer, BUFFER);

	while (source_read > 0)
	{
		if (dest_file == -1 || write(dest_file, buffer, source_read) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			exit(99);
		}
	}
	if ((close(src_file)) == -1 || (close(dest_file)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_file);
		exit(100);
	}
	return (0);
}
