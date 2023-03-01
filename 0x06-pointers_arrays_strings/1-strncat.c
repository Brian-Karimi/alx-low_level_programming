#include "main.h"

/**
 * _strncat-concatenates two strings  while using n bytes in @src
 * @dest: Appending variable
 * @src: concatenation variable
 * @n: integer variable for n bytes in @src
 * Return: A pointer @dest new string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int dest_len = 0;

	while (dest[dest_len])
	{
		dest_len++;
	}
	for (; src[i] && i < n != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
		dest[dest_len + i] = '\0';
	}
	return (dest);
}
