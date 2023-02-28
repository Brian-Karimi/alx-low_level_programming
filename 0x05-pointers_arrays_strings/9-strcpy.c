#include "main.h"

/**
 * _strcpy-copies the string pointed to by src.
 * Including the terminating null byte (\0).
 * Copy to the buffer pointed to by dest.
 * @dest: buffer
 * @src: pointer variable
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, x;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (x = 0; x < i; x++)
	{
		dest[x] = src[x];
	}
	dest[i] = '\0';
	return (dest);
}
