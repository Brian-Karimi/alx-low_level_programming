#include "main.h"

/**
 * print_square- prints a square
 * @size: size of the sqaure
 */
void print_square(int size)
{
	char ch;

	for (ch = 0; ch < size; ch++)
	{
		_putchar('#');
	}
	_putchar('\n');

	return;
}
