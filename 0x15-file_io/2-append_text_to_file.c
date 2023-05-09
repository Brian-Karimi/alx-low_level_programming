#include "main.h"

/**
 * append_text_to_file - appends texts at EOF
 * @filename: name of the file
 * @text_content: Null termkanted string to add at EOF
 * Return: 1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file_id, print_result, input_str_length;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		file_id = open(filename, O_WRONLY | O_APPEND, 664);
		if (file_id == -1)
		{
			return (-1);
		}
		input_str_length = 0;
		while (*(text_content + input_str_length) != '\0')
			input_str_length++;

		print_result = write(file_id, text_content, input_str_length);
		{
			if (print_result == -1)
			{
				close(file_id);
				write(STDOUT_FILENO, "fails", 5);
				return (-1);
			}
		}
	}
	close(file_id);
	return (1);
}
