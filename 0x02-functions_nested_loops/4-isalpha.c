#include "main.h"

/**
* _isalpha - Shows 1 if the input is c
* letter on other cases  cases, shows 0
*
* @c: The character in ASCII code
*
* Return: 1 for letters. Returns 0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
		else
		{
			return (0);
		}
	}_putchar('\n');
}
