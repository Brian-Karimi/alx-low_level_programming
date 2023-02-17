#include <stdio.h>
/**
 *  main - Entry Point
 *  Description : use putchar to print output-alphabets in lowercase
 *  Return: 0
*/
int main (void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
		if (x == 'e' || x == 'q')
		x++;
	}
	putchar('\n');

	return (0);
}
