#include "main.h"

/**
 * _strncat-concatenates two strings
 * @dest: destination input pointer
 * @src: source n=input pointer
 * @n: number of bytes @src
 * Return: return concatenated string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int dest_len = 0;

	while (dest[i])
	{
		dest_len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len++] = src[i];
	}
	return (dest);
}
