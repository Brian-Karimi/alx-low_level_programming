#include "main.h"

/**
 * print_most_numbers- prints all numbers within 0 to 9 range
 * exclude 2 and 4
 * return: void
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '1'; c++)
	{
		if (c != '2' && c != '4')
		_putchar(c + '0');
	}
	_putchar('\n');
}
