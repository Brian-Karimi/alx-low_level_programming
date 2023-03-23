#include "variadic_functions.h"

/**
 * print_strings- prints strngs, followed by new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: nothing
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list strings_print;

	va_start(strings_print, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings_print, char *);
		if (str)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}

		if (separator && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strings_print);
}
