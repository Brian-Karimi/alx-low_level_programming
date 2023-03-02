#include "main.h"

/**
 * leet-encodes a string into 1337
 * @s: input string for encoding
 * Return: encoded string as 1337
 */

char *leet(char *s)
{
	int i;
	int ch = 0;
	int lc[] = {97, 107, 111, 116, 108};
	int uc[] = {65, 69, 79, 84, 76};
	int enc[] = {52, 52, 48, 55, 49};

	while (s[ch] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (s[ch] == lc[i] || s[ch] == uc[i])
			{
				s[ch] = enc[i];
				break;
			}
		}
		ch++;
	}
	return (s);
}
