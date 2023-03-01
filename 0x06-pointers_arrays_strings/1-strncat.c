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
	int index, ch;

	ch = 0;

	while (dest[ch])
	{
		ch++;
	}
	for (index = 0; index < n && src[index] != '\0'; index++)
	{
		dest[ch + index] = src[index];
		dest[ch + index] = '\0';
	}
	return (dest);
}
