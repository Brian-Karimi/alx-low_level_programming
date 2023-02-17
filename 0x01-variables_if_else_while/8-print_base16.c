#include <stdio.h>

/**
 *  main - Entry Point
 *  Description : prints all the numbers of base 16 in lowercase, followed by a new line.
 *  Return: 0
*/
int main(void)
{
	int x;
	char lower = 'a';

	while (x = 0; x < 16; x++ && lower <= 'z')
	{
		putchar("%i", x);
		putchar(lower);
		lower++;
	}
	putchar('\n');

	return (0);
}
