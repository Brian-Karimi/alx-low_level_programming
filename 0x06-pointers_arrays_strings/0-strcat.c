#include "main.h"

/**
 * _strcat-concatenates  two strings
 * @dest: Appending string
 * @src: Concatenation string
 * Return: returns src to @dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int dest_len = 0;

	while (dest[i++])
	{
		dest_len++;
	}
	for (; src[i]; i++)
	{
		dest[dest_len++] = src[i];
	}
	return (dest);
}
