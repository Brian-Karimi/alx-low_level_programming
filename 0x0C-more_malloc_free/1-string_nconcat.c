#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat-concatenates two strings
 * @s1: pointer to input string 1
 * @s2: pointer to input string 2
 * @n: number of bytes of @S@ to be add to @s1 to make a new string
 * Return: a pointer to the new memory address
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	unsigned int j;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 ==  NULL)
	{
		s2 = "";
	}

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}

	str = malloc(sizeof(char) * (i + n + 1));
	if (str == NULL)
		return (NULL);
	i = j = 0;

	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (j < n && s2[j] != '\0')
	{
		str[i] = s2[j];
		i++, j++;
	}
	str[i] = '\0';
	return (str);
}
