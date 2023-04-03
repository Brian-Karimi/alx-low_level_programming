#include "main.h"
#include <stdlib.h>

/**
 * argstostr-concatenates all program functions
 * @ac: argument counter
 * @av: argument vector double pointer char variabe
 * Return: pointer to new string or NULL if program fails
 **/
char *argstostr(int ac, char **av)
{
	int i, j, k, len_av;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	len_av = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len_av++;
		}
		len_av++;
	}

	str = malloc((len_av + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '0';
	return (str);
}
