#include <stdio.h>
/**
 *  main - Entry Point
 *  Description : use putchar to print output-alphabets in lowercase
 *  Return: 0
*/
int main(void)
{
	int x;
	
	x = 1;
	
	while (x <= 9)
	{
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
