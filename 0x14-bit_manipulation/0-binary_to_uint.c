#include "main.h"

/**
 * _strtoi-converts str/char array to int
 * @c: character to convert
 * Return: converted int
 **/

unsigned int _strtoi(char c)
{
	return ((unsigned int) c - '0');
}
/**
 * _strlen-string length
 * @s: string input
 * Return: computed length
 **/
unsigned int _strlen(const char *s)
{
	unsigned int index;

	for (index = 0; s[index]; index++)
		;
	return (index);
}
/**
 * binary_to_uint- converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: converted number or 0 if chars is not 0 or 1 or b = NULL
 **/

unsigned int binary_to_uint(const char *b)
{
	int iter;
	unsigned int rslt, temp, expor;

	if (!b)
	{
		return (0);
	}

	rslt = temp = 0;
	expor = 1;

	for (iter = _strlen(b) - 1; b[iter]; iter--, expor *= 2)
	{
		if (b[iter] != '0' && b[iter] != '1')
		{
			return (0);
		}
		temp = _strtoi(b[iter]);
		rslt += temp * expor;
	}
	return (rslt);
}
