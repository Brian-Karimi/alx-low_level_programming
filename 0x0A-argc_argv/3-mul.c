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
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		{
			return (1);
		}
	}

	else
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		{
			printf("%d\n", product);
		}
		return (0);
	}
}
