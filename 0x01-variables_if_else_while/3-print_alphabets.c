#include <stdio.h>
#include <stdlib.h>

/**
 *  main - Entry Point
 *  Description : putchar to print upper and lower case alphabets
 *  Return: 0
*/
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	x = 'A';
	while (x <= 'Z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
