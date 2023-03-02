#include "main.h"

/**
 * cap_string-Capitalizes all words of a string
 * @c: pointer variable
 * Return: c
 */
char *cap_string(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			if (i == 0)
			{
			c[i] -= 32;
			}
		if (c[i - 1] == 32 || c[i - 1] == 9 ||
			c[i - 1] == 10 || c[i - 1] == 44 ||
			c[i - 1] == 59 || c[i - 1] == 46 ||
			c[i - 1] == 33 || c[i - 1] == 63 ||
			c[i - 1] == 34 || c[i - 1] == 40 ||
			c[i - 1] == 42 || c[i - 1] == 123 ||
			c[i - 1] == 125)
		{
		c[i] -= 32;
		}
		}
	i++;
	}
return (c);
}


