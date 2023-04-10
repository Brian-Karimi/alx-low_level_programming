#include "main.h"

/**
 * read_textfile-reads a text file and prints it to the POSIX Stdout
 * @filename:file to read text
 * @letters: letters to be read and printed in the POSIX stdout
 * Return: Number of letters to read and print in the POSIX
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_name, read_result, print_result;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	file_name = open(filename, O_RDONLY);
	if (file_name == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	read_result = read(file_name, buffer, letters);
	if (read_result == -1)
	{
		return (0);
	}
	print_result =  write(STDOUT_FILENO, buffer, read_result);
	if (print_result == -1 || read_result != print_result)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(file_name);
	return (print_result);
}
