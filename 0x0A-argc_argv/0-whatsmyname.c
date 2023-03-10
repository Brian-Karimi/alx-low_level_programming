#include "main.h"
#include <stdio.h>

/**
 * main-a program that prints its name
 * @argc: argument counter
 * @argv: array pointer holding the arguments passed
 * Return: 0
 */
int main(int argc __attribute__((__unused__)), char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	{
		return (0);
	}
}
