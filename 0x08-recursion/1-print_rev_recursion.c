#include "main.h"

/**
 * _print_rev_recursion-prints strings in reverse
 * @s: string input pointer variable
 * Return: Void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
