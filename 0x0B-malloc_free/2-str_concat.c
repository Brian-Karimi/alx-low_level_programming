#include "main.h"
#include <stdlib.h>

/**
 * str_concat-concatenates two strings
 * @s1: string input pointer variable
 * @s2: concatenated string pointer variable
 * Return: @s2
 */
char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, i, j;
	char *st;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	while (s1[a] != '\0')
	{
		a++;
	}
	while (s2[b] != '\0')
	{
		b++;
	}

	st = malloc((a * sizeof(char)) + ((b + 1) * sizeof(char)));

	if (st == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		st[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		st[i] = s2[j];
		i++;
	}
	st[i] = '\0';
	return (st);
}
