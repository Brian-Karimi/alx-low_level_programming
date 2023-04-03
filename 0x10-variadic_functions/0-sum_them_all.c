#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all- funtion that returns the summ of all its param
 * @n: number of param passed in the function
 * Return: sum of all parameters
 **/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int nSum = 0;
	unsigned int i;

	va_list sum_of_param;

	va_start(sum_of_param, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		nSum += va_arg(sum_of_param, int);
	}
	va_end(sum_of_param);

	return (nSum);
}
