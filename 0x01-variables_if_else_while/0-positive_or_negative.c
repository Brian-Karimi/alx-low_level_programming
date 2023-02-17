#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  main - Entry Point
 *  Description : Get a number and print its value input
 *  And test/evaluate if it is positive, negative or zero
 *  Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);

	return (0);
}
