#include "main.h"

/**
 * _strcat- concatenates two strings
 * @dest: Destination input pointer
 * @src: Source input pointer
 * Return: Concatenated string @dest
 */
char *_strcat(char *dest, char *src)
{
	int al = 0;
	int om = 0;
	int i;

	while (dest[om] != '\0')
	{
		om++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[om + i] = src[i];
	}
	return (dest);
}
