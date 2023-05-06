#include "main.h"

/**
 * print_binary - prints the binary representation of a Number
 * @n: integer  to represent the binary value
 * Return: void
*/
void print_binary(unsigned long int n)
{
	int index = ((sizeof(unsigned long int) * 8) - 1);
	int flag = 0;

	for (; index >= 0; index--)
	{
		if ((n >> index) & 1)
		{
			putchar ('1');
			flag = 1;
		}
		else if (flag)
		{
			putchar('0');
		}
	}
	if (!flag)
	{
		putchar('0');
	}
}
