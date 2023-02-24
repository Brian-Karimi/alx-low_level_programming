#include "main.h"

/**
 * print_square- prints a square
 * @size: size of the sqaure
 * Return: 0
 */
void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_square(2);
	print_square(10);
	print_square(0);
	return (0);
}

