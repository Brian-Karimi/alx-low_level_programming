#include "main.h"

/**
 * strtoi- converst str or array of char to int
 * @str: char to convert to int
 * Return: int of converted str
 */

unsigned int strtoi(char str)
{
	return ((unsigned int) str - '0');
}
/**
 * _strlen- length of the input string
 * @s: string input
 * Return: Length of the input length
 */
unsigned int _strlen(const char *s)
{
	unsigned int i = 0;
	
	for(; s[i]; i++)
		;
	return (i);
}
/**
 * binary_to_uint - converts binary num to uint
 * @b: pointer to a string of 0 & 1 chars
 * Return: converted number or
 * 	0 if chars in b != 0 or 1
 * 	0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int output, temp_var, expor;

	if(!b)
	{
		return(0);
	}

	output = temp_var = 0;
	expor = 1;

	for(index = _strlen(b) - 1; b[index]; index--, expor *= 2)
	{
		if(b[index] != '0' && b[index] != '1')
		{
			return (0);
		}

		temp_var = strtoi(b[index]);
		output += temp_var * expor;
	}
	return(output);
}
