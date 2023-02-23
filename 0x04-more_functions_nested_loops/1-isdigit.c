#include "main.h"

/**
 * _isdigit- checks for a digit within 0 and 9
 * @c: integer input
 * return ; 1 when c is a digit and
 * Return: Always 0 for otherwise
 */

int _isdigit(int c)
{
	while (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

