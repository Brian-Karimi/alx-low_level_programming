#include "variadic_functions.h"

/**
 * print_char-print a character
 * @arg_list: argument list
 * Return: nothing
 **/

void print_char(va_list arg_list)
{
	printf("%c", va_arg(arg_list, int));
}
/**
 * print_int-print an integer
 * @arg_list: argument list
 * Return: nothing
 **/
void print_int(va_list arg_list)
{
	printf("%d", va_arg(arg_list, int));
}
/**
 * print_float-print a float
 * @arg_list: argument list
 * Return: nothing
 **/

void print_float(va_list arg_list)
{
	printf("%f", va_arg(arg_list, double));
}
/**
 * print_string-print a string
 * @arg_list: argument list
 * Return: nothing
 **/

void print_string(va_list arg_list)
{
	char *str = va_arg(arg_list, char*);

	if (str == NULL)
	{
		str = "(nil)";
	}
	printf("%s", str);
}
/**
 * print_all - Prints anything.
 * @format: Format that the arguments.
 *
 *Return: Void.
 */

void print_all(const char * const format, ...)
{
	int i = 0, j = 0, len = 0;
	char *separator = "";
	va_list arg_list;

	print_t print[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};

	len = sizeof(print) / sizeof(*print);

	va_start(arg_list, format);

	while (format[i] != '\0')
	{
		j = 0;

		while (j < len)
		{
			if (format[i] == print[j].format)
			{
				printf("%s", separator);
				print[j].function(arg_list);
				separator = ", ";
				j++;
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(arg_list);
}
