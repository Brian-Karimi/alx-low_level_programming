#include "main.h"

/**
 * print_line- prints a straight line on the terminal
 * Should end with a new line;
 * @n: integer input to determine the number of _ to be printed
 * Return: n
 */
void print_line(int n)
{
	char ch;

	for (ch = 0; ch < n; ch++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
