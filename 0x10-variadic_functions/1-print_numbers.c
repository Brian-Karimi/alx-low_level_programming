#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers-function that prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers
 * Return: nothing
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list number_print;

	va_start(number_print, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(number_print, int));

		if (separator && i != n - 1)

		printf("%s", separator);
	
	}
	va_end(number_print);
	printf("\n");
}
