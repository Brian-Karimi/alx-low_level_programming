#include <stdio.h>
/**
 *  main - Entry Point
 *  Description : use putchar to print output-alphabets in lowercase
 *  Return: 0
*/
int main(void)
{
	char x;
	
	x = 0;

	while (x < 10)
	{ 
		putchar("%c", x);
		x++;
	}
	putchar('\n');

	return (0);
}
