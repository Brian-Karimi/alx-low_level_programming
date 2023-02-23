#include  "main.h"

/**
 * print_numbers- prints all numbers in the range 0-9
 * Return: 0
 */

void print_numbers(void)
{
	char x;

	while (x >= 48 && x <= 57)
	{
		_putchar(x);
	}
	_putchar('\n');
}

