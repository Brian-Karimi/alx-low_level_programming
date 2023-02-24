#include "main.h"

/**
 * print_triangle- prints a triangle
 * utilizes _putchar function
 * @size: The size of the triangle
 *  Return: no return
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x;
		int y;
	for (x = 1; x <= size; x++)
	{
		for (y = 1 ; y <= size - x; y++)
		{
			_putchar(' ');
		}
		for (y = 1; y <= x; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	}
}
