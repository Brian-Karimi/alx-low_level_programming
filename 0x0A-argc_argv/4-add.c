#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * isDig-chech if string is an array of digits only
 * @num: array of string to eveluate
 * Return: 0 if true and 1 if false
 */

int isDig(char num[])
{
	int i, len = strlen(num);
	{
		for (i = 0; i < len; i++)
		{
			if (!isdigit(num[i]))
			{
				return (1);
			}
		}
		return (0);
	}
}

/**
 * main-a program that prints its name
 * @argc: argument counter
 * @argv: array pointer holding the arguments passed
 * Return: 0
 */
int main(int argc __attribute__((__unused__)), char *argv[])
{
	int sum, i;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		sum = 0;

		for (i = 1; i < argc; i++)
		{
			if (isDig(argv[i]) == 0)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
