#include "main.h"

/**
 * _sqrt_recursion_wrapper-execute the recursive action of the function
 * @n: input variable to find natural squareroot
 * @ll: lower guess limit
 * @ul: upper guess limit
 * Return: @sqrt of the input @n or -1
 */

int _sqrt_recursion_wrapper(int n, int ll, int ul)
{
	int guess, guessSquared;

	guess = (ul + ll) / 2;

	if (guessSquared == n)
	{
		return (guess);
	}
	else if (ll == ul)
	{
		return (-1);
	}
	else if (guessSquared < n)
	{
		return (_sqrt_recursion_wrapper(n, guess + 1, ul));
	}
	else
	{
		return (_sqrt_recursion_wrapper(n, ll, guess + 1));
	}
}
/**
 * _sqrt_recursion-returns the natural square root of a number
 * @n: input variable to find natural squareroot
 * Return: @sqrt of the input @n
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion_wrapper(n, 1, n));
	}
}
