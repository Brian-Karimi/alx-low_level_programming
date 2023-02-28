#include "main.h"
#include <stdio.h>

/**
 * rev_string-reverses a string
 * @s:Pointer Variable
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0;
	int l;
	char *c = s;
	int om = 0;
	int x;
	char n;

	while (c != '\0')
	{
		c++;
		length++;
	}
	l = length - 1;
	for ( ; om < ((l / 2) + 1); om++)
	{
		x = (l - om);
		n = s[om];
		s[om] = s[x];
		s[x] = n;
	}

}
