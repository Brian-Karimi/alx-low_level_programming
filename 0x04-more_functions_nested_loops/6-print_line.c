#include "main.h"
#include <stdio.h>

/**
 * print_line- prints a straight line on the terminal
 * Should end with a new line;
 * @n: integer input to determine the number of _ to be printed
 * Return: n
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
/**
 * main- check code
 * Return: 0
 */
int main(void)
{
	print_line(0);
	print_line(2);
	print_line(10);
	print_line(-4);
	return (0);
}
