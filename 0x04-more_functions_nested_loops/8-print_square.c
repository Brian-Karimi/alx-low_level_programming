#include "main.h"

/**
 *main-check code
 * print_square- prints a square
 * @size: size of the sqaure
 * 
 * Return: 0
 */
int main(void)
{
    print_square(2);
    print_square(10);
    print_square(0);
    return (0);
}

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
