#include "main.h"
#include <stdlib.h>

/**
 * _strdup-returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string  pointer to a string duplicate
 * Return: @str
 */
char *_strdup(char *str)
{
	int i, len;
	char *st;

	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	st = malloc((len + 1) * sizeof(char));

	if (st == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		st[i] = str[i];
		i++;
	}
	return (st);
}
