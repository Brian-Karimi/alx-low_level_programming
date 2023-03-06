#include "main.h"

/**
 * _strpbrk-searches a string for a number of set bytes
 * @s:string input pointer variable
 * @accept: pointer variable  to the string searched for @s
 * Return: pointer to s in bytes or NULL if no such byte is found 
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0; j;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
