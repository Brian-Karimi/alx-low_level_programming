#include "main.h"

/**
 * _strlen-calculates the length of a string exlucing '\0'
 * @s:pointer variable
 * Return: the length
 *
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}
