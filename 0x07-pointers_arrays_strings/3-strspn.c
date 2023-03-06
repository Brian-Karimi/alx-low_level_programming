#include "main.h"

/**
 * _strspn- get the length of the prefix substring
 * @s: string input pointer variable
 * @accept: substring prefix string to be searched for
 * Return: n which will be the number of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, flag;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		flag = 1;
		{
			while (accept[j] != '\0')
			{
				if (s[i] == accept[j])
				{
					flag = 0;
					break;
				}
				j++;
			}
			if (flag == 1)
				break;
			i++;
		}
	}

	return (i);
}
