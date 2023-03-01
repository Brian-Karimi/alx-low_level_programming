#include "main.h"

/**
 * _strcmp- compares two strings
 * @s1:string input
 * @s2: string input to compare  with string input 1
 * Return: 0 if s1 = s2, >0 if s1 > s2  and <0 if s1 < s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int ret;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			ret = s1[i] - s2[i];
			break;
		}
		else
		{
			ret = s1[i] - s2[i];
		}
		i++;
	}
	return (ret);
}
