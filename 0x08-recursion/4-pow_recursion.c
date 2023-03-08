#include "main.h"

/**
 * _pow_recursion-returns the value of x raised to y
 * @x: input value
 * @y: the value t raise @x to
 * Return: the new value of @x after raising to y
 */

int _pow_recursion(int x, int y)
{
	int evenNumber;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y % 2 == 0)
	{
		evenNumber = (_pow_recursion(x, y / 2));
		return (evenNumber * evenNumber);
	}
	else
	{
		return (x * _pow_recursion(x, y));
				}
				}
