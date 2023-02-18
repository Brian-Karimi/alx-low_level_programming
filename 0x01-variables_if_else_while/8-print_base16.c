#include <stdio.h>

/**
 *  main - Entry Point
 *  Description : prints all the numbers of base 16 in lowercase
 *  Must add a new line.
 *  Return: 0
*/
int main(void)
{
	char x;

	for (x = 0; x <= 16; x++)
		putchar(x);
	for (x = 'a'; x <= 'f'; x++)
		putchar(x);
	putchar('\n');

	return (0);
}
