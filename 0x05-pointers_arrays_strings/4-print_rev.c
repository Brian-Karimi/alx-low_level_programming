#include "main.h"

/**
 * print_rev-prints string in reverse
 * must have a new line
 * @s: Pointer Variable
 * Return: void
 */
void print_rev(char *s)
{
	int x = 0;

	while (s[x])
	{
		x++;
	}
	while (x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
