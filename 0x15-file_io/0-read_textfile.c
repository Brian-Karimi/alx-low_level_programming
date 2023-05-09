#include "main.h"

/**
 * read_textfile - reads a text file amd print to STDOUT
 * @filename: source file to read text from
 * @letters: number of letters it should read and print
 * Return: actual numbers it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_id, read_results, print_results;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	file_id = open(filename, O_RDONLY);

	if (file_id == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		return (0);
	}
	read_results = read(file_id, buffer, letters);

	if (read_results == -1)
	{
		return (0);
	}
	print_results = write(STDOUT_FILENO, buffer, read_results);
	if (print_results == -1 || read_results != print_results)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(file_id);
	return (print_results);
}
