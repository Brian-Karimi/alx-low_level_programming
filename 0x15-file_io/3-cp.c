#include "main.h"

/**
 * main-entry point
 * @argc: count argument
 * @argv: arg size
 * Return: 0 on success
 **/

int main(int argc, char *argv[])
{
	int source_file, dest_file, read_src;
	char buff_var[BUFFER_VAR];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	source_file = open(argv[1], O_RDONLY);
	if (source_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	dest_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((read_src = read(source_file, buff_var, BUFFER_VAR)) > 0)
	{
		if (dest_file == -1 || write(dest_file, buff_var, read_src) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close((source_file) == -1) || (close(dest_file) == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't close source_file, dest_file");
		exit(100);
	}
	return (0);
}
