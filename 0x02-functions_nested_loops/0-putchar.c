#include "main.h"

/**
 * main - Entry Point
 * _putchar- writes the character c to stdout
 * Prgram should print c
 *
 * Return:0
 */
int main(void)
{
	char p[] = "_putchar";
	int x;

	for (x = 0; x < 8; x++)
	{
		_putchar(p[1]);
	}
	_putchar('\n');
	return (0);
}
