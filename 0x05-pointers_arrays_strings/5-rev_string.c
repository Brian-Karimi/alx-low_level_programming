#include "main.h"

/**
 * rev_string-reverses a string
 * @s:Pointer Variable
 * Return: void
 */
void rev_string(char *s)
{
	int x, y, z;
	char *c, ch;

	c = s;
	while (s[y] != '\0')
	{
		y++;
	}
	for (z = 1; z < y; z++)
	{
		c++;
	}
	for (x = 0; x < (y / 2); x++)
	{
		ch = s[x];
		s[x] = *c;
		*c = ch;
		c--;
	}
}
