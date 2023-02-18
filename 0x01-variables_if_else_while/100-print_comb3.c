#include <stdio.h>

/**
 *  main - Entry Point
 *  Description: prints all possible combinations of numbers.
 *  Numbers must be separated by ,, followed by a space, excluding 01 and 10
 *  Numbers should be printed in their list value of combination
 *  Return: 0
*/
int main(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		for (y = x + 1; y <= 9; y++)
		{
			putchar(x + '0');
			putchar(y  + '0');

			if (x < 8)
			{
				putchar(',');
				putchar (' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
