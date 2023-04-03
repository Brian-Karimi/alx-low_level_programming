#include "main.h"
#include <stdio.h>

/**
 * main-a program that prints its name
 * @argc: argument counter
 * @argv: array pointer holding the arguments passed
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
