#include <stdio.h>
/**
 *  main - Entry Point
 *  Description : use putchar to print output-alphabets in lowercase
 *  Return: 0
*/
int main(void)
{
	int x;
	
	x = 0;

	while (x < 10)
	{ 
		putchar("%i", x);
		x++;
	}
	putchar('\n');

	return (0);
}
