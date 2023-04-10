#include "main.h"

/**
 * create_file-creates a file
 * @filename: name of the yet to be created file
 * @text_content:Null terminated string
 * Return: Success 1, Failed: -1
 **/

int create_file(const char *filename, char *text_content)
{
	int file_name, strlength;
	ssize_t print_result;

	if (filename == NULL)
		return (-1);

	file_name = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_name == -1)
		return (-1);
	if (text_content != NULL)
	{
		strlength = 0;

		while (*(text_content + strlength) != '\0')
		{
			strlength++;
		}

		print_result = write(file_name, text_content, strlength);

		if (print_result == -1)
		{
			write(1, "fails", 6);
			return (-1);
		}
	}
	close(file_name);
	return (1);
}
