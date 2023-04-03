#include "variadic_functions.h"

/**
 * print_numbers-function that prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers
 * Return: nothing
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list number_print;

	va_start(number_print, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(number_print, int);
		printf("%d", num);
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(number_print);
}
