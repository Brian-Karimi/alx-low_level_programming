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
	if (n > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n);
	else if (n == 0)
		printf("Last digit of %i is %i is 0\n", n);
	else 
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n);
	return (0);
}
