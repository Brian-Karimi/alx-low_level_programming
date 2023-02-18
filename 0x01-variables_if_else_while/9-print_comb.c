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
	for (x = 48; x < 58; x++)
		putchar(x);
		if (x < 57)
			putchar(44);
			putchar(32);
	putchar('\n');

	return (0);
}
