#include "main.h"

/**
 * more_numbers- prints 10 times the numbers from 0 to 14
 * must include a new line
 * return: void
 */
void more_numbers(void)
{
	int x, ch;


	for (x = 0; x <= 9; x++)
	{
		for (ch = 0; ch <= 14; ch++)
		{
			if (ch > 9)
			{
				_putchar((ch / 10) + '0');
			}
			_putchar((ch % 10) + '0');
		}
		_putchar('\n');

	}
}
