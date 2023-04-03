#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main-a program that prints its name
 * @argc: argument counter
 * @argv: array pointer holding the arguments passed
 * Return: 0
 */
int main(int argc __attribute__((__unused__)), char *argv[])
{
	int cents, centsCount = 0;

	if (argc != 2)
	{
		printf("Error\n");
		{
			return (1);
		}
	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
		}
		else if (cents >= 10)
		{
			cents -= 10;
		}
		else if (cents >= 5)
		{
			cents -= 5;
		}
		else if (cents >= 2)
		{
			cents -= 2;
		}
		else if (cents >= 1)
		{
			cents -= 1;
		}
		centsCount += 1;
	}
	printf("%d\n", centsCount);
	return (0);
}
