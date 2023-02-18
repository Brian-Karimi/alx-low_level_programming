#include <stdio.h>

/**
 *  main - Entry Point
 *  Description: prints all possible combinations of single-digit numbers.
 *  Numbers must be separated by ,, followed by a space
 *  Numbers should be printed in ascending order
 *  Return: 0
*/
int main(void)
{
	int x;
	/** use of ASCII Code since we are using putchar function*/
	for (x = '0'; x <= '9';  x++)
	{
		putchar(x + '0');
		if (x <= 9)
		{
			putchar(',');
			putchar(' ');
		}
		putchar('\n');

		return (0);
	}
}
