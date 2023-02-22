#include "main.h"

/**
 * jack_bauer- a funtion of time
 * from 00:00 to 25:59
 *
 * return: void- no return
 */
void jack_bauer(void)
{
	int w, x, y, z;

	for (w = '0'; w <= '2'; w++)
	{
		for (x = '0'; x <= '9'; x++)
		{
			for (y = '0'; y <= '5'; y++)
			{
				for (z = '0'; z <= '9'; z++)
				{
					if (w >= '2' && x >= '4')
						break;
					_putchar(w);
					_putchar(x);
					_putchar(':');
					_putchar(y);
					_putchar(z);
					_putchar('\n');
				}
			}
		}
	}
}
