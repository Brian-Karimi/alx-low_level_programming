#include "main.h"
#include <stdio.h>

/**
 * main-entry point/ code return
 * _isupper-checks if the input is uppercase
 * main - check the code.
 * Return: Always 0.
 */
int main(void)
{
	char c;

	while (c = 'A')
	{
		printf("%c: %d\n", c, _isupper(c));

		return (1);
	}
	return (0);
}
