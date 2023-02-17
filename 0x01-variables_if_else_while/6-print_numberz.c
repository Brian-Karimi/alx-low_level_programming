#include <stdio.h>

/**
 *  main - Entry Point
 *  Description : You are not allowed to use any variable of type char
 *  You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 *  You can only use putchar twice in your code
 *  All your code should be in the main function
 *  Return: 0
*/
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
	}
	putchar('\n');

	return (0);
}
