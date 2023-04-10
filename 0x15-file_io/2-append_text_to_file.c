#include "main.h"

/**
 * append_text_to_file-appends text ata EOF
 * @filename: name of the file
 * @text_content: Null terminated string to add at EOF
 * Return: 1 on Success and -1 on failure
 **/

int append_text_to_file(const char *filename, char *text_content)
{
	int file_name, print_result, strlength;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		file_name = open(filename, O_WRONLY | O_APPEND);
		if (file_name == -1)
			return (-1);
		 strlength =  0;

		while (*(text_content + strlength) != '\0')
			strlength++;
		print_result = write(file_name, text_content, strlength);
		{
			if (print_result == -1)
			{
				close(file_name);
				write(STDOUT_FILENO, "fails", 5);
				return (-1);
			}
		}
	}
	close(file_name);
	return (1);
}
