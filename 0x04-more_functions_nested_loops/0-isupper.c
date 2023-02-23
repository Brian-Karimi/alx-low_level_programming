#include "main.h"

/**
 * _isupper-checks if the input is uppercase
 * @c: input integer
 * Return: 1 if c is in uppercase and  0 if otherwise
 */
int _isupper(int c)
{
	while (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
