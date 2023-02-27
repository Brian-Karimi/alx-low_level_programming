#include "main.h"

/**
 * puts2-prints all characters of a string, starting with the first character
 * Must have a new line
 * @str: Point variable
 * Return: void
 */
void puts2(char *str)
{
	int x;
	int y = 0;

	while (str[y] != '\0')
	{
		y++;
	}
	for (x = 0; x < y; x += 2)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
