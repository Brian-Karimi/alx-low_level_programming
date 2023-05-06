#include "main.h"

/**
 * print_binary - prints the binary representation of a Number
 * @n: integer  to represent the binary value
 * Return: void
*/
void print_binary(unsigned long int n)
{
	int index = 63;
	int flag = 0;
	unsigned long int a_bit = (n >> index) & 1;

	for (; index >= 0; index--)
	{
		if (a_bit || flag)
		{
			_putchar(a_bit ? '1' : '0');
			flag = 1;
		}
	}
	if (!flag)
	{
		_putchar('0');
	}}
