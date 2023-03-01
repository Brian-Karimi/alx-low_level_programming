#include "main.h"

/**
 * _strncpy- copies a string
 * @dest: Destination input pointer
 * @src: Source input  pointer
 * @n: number of @src
 * Return: copied string @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int dest_len = 0;

	while (dest[dest_len])
	{
		dest_len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
