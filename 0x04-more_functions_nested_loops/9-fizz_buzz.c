#include <stdio.h>

/**
 * main-entyr point
 * The “Fizz-Buzz test” is an interview question designed to help filter
 * Return: Always 0
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if ((x % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((x % 5) == 0)
		{
			printf("Buzz");
		}
		else if ((x % 15) == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", x);
		}
		putchar(' ');
		
	}
	putchar('\n');

	return (0);
}
