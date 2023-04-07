#include "main.h"

/**
 * print_binary-the binary representation of a No.
 * @n: interger to  get its binary value
 * Return: nothing
 **/

void print_binary(unsigned long int n)
{
	int index, flag_var;

	if (n == 0)
	{
		_putchar('0');
	}

	for (flag_var = 0; (index = sizeof(n) * 8 - 1) && index >= 0;index--)
	{
		if ((n >> index) & 1)
			flag_var = 1;
		if (flag_var == 1)
			((n >> index) & 1) ? _putchar('1') : _putchar('0');
	}
}
