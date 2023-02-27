#include "main.h"

/**
 * _puts-prints a string followed by new line
 * @str: Pointer Variable
 * Return: string
 */

void _puts(char *str)
{
	char string = 0;

	while (*(str + string) != '\0')
	{
		_putchar(str[string]);
		string++;
	}
	_putchar('\n');
}
