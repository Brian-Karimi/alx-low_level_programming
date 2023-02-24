#include "main.h"

/**
 * print_triangle- prints a triangle
 * utilizes _putchar function
 * @size: The size of the triangle
 *  Return: no return
 */
void print_triangle(int size)
{
	int x, y;

	if (size <= 0)
		putchar('\n');

	for (x = 1; x <= size; x++)
	{
		for (y =1 ; y <= size - i; y++)
		{
			putchar(' ');
		}
		for (y = 1; j <= i; y++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
