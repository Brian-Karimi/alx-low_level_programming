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
	printf("Last digit of %i\n", n);
		if (n > 5)
			printf("and is greater than 5\n");
		else if (n == 0)
			printf("is 0");
		else (0 > n < 6);
			printf("and is less than 6 and not 0");
	return (0);
}
