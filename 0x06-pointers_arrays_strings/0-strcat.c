#include "main.h"

/**
 * _strcat- concatenates two strings
 * @dest: Destination input pointer
 * @src: Source input pointer
 * Return: Concatenated string @dest
 */
char *_strcat(char *dest, char *src)
{
	int al;
	int om = 0;
	
	while (dest[om] != '\0')
	{
		om++;
	}
	for (al = 0; src[al] != '\0'; al++)
	{
		dest[om++] = src[al];
	}
	return (dest);
}
