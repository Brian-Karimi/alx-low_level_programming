#include "main.h"

/**
 * print_alphabet_x10 - Printing all aphabets in lowercase ten times
 *
 * Return:0 success
 *
 */
void print_alphabet_x10(void)
{
	int x, y;

	for (y = 0; y < 10; y++)
	{
		for (x = 97; x < 123; x++)
		{
			_putchar(x);
		}
	}
	_putchar('\n');

}
