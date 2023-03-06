#include "main.h"

/**
 * _strchr-locates a character in a string
 * @s: pointer to the declared string array
 * @c; character to locate from the array input 
 *
 * Return: @c first occurence and null if character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
	{
		return (s);
		return ('\0');
	}
}
