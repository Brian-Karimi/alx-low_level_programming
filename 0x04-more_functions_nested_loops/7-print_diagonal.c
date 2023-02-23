#include "main.h"

/**
 * print_diagonal-  Draws a diagonal line
 * Must be printed in a new line
 * @n: integer value to determine the number of \ to be printed
 * Return: n
 */
void print_diagonal(int n)
{
	int x;
	int y;

	if (n <= 0)
		_putchar('\n');
	for (x = 0; x < n; x++)
	{
		for (y = 0; y <= x; y++)
		{
			if (x == y)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}
		}
	}
}
