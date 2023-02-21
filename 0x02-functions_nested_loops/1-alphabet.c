#include "main.h"

/**
 * main- entry point
 * Description: Printing all alphabets in lowercase
 *
 * Return:0 success
 *
 */
void print_alphabet(void)
{
	int x;

	for (x = 'a'; x < 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
	return (0);
}
