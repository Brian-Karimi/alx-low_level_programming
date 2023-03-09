#include "main.h"

/**
 * is_prime-checks if its a prime number
 * @n: input integer
 * @comp: for comparison
 * Return: is_prime
 */

int is_prime(unsigned int n, unsigned int comp)
{
	if (n % comp == 0)
	{
		if (n == comp)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (is_prime(n, (comp + 1)));
}
/**
 * _is_prime_number- returns 1 if n is a prime number
 * @n: input integer
 * Return: 1 if prime and 0 if otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (is_prime(n, 2));
	}
}
