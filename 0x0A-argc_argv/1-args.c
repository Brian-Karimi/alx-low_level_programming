#include "main.h"
#include <stdio.h>

/**
 * main-a program that prints its name
 * @argc: argument counter
 * @argv: array pointer holding the arguments passed
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((__unused__)))
{
	int max, i = 0;

	while (i < argc)
	{
		max = i;
		i++;
	}
	printf("%d\n", max);
	{
		return (0);
	}
}
