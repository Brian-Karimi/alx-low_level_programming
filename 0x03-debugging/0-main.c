#include "main.h"

/**
 * main- entry point
 * positive_or_negative- assigns a random number to the variable n
 * variables can be positive or negative
 *
 * @x- input as integer
 *
 * Return: 0
 */
int main(void)
{	int x;

	srand(time(0));
	x = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (x > 0)
		printf("%i is positive\n", x);
	else if (x < 0)
		printf("%i is negative\n", x);
	else
		printf("%i is zero\n", x);
	return (0);

}
