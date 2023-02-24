#include "main.h"

/**
 * print_line- prints a straight line on the terminal
 * main-check code
 * Should end with a new line;
 * @n: integer input to determine the number of _ to be printed
 * Return: 0
 */
void print_line(int n)
{
	if (n > 0)
	{
		int x = 1;

		while (x <= n)
		{
			_putchar('_');
			x++;
		}
	}
	_putchar('\n');
}
