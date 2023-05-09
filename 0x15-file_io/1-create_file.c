#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: file to create
 * @text_content: Null terminated string to write in filename
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_id, input_str_length;
	ssize_t print_results;

	if (filename == NULL)
	{
		return (-1);
	}
	file_id = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_id == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		input_str_length = 0;

		while (*(text_content + input_str_length) != '\0')
		{
			input_str_length++;
		}
		print_results = write(file_id, text_content, input_str_length);
		if (print_results == -1)
		{
			write(1, "fails", 6);
			return (-1);
		}
	}
	close(file_id);
	return (1);
}
