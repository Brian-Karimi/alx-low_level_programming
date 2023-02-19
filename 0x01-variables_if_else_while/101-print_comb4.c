#include <stdio.h>

/**
 *  main - Entry Point
 *  Description: prints all possible combinations of 3-digit numbers.
 *  Numbers must be separated by ,, followed by a space
 *  Numbers 012, 120, 102, 021, 201, 210 are considered the same combination
 *  of the three digits 0, 1 and 2
 *  Return: 0
*
*/
int main(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x < 8; x++)
	{
		for (y = x + 1; y < 9; y++)
		{
			for (z = y + 1; z < 10; z++)
			{
				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');

				if (x == 7 && y == 8 && z == 9)
					continue;
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
