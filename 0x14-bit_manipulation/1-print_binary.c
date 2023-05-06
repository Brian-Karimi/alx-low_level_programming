#include "main.h"

/**
 * print_binary - prints the binary representation of a Number
 * @n: integer  to represent the binary value
 * Return: void
*/
void print_binary(unsigned long int n)
{
	int index;

	for (index = sizeof(n) * 8 - 1; index >= 0; index--)
	{
		if ((n & (1ul << index)) == 0)
		{
			printf("0");
		}
		else
		{
			printf("1");
		}
	}
}
