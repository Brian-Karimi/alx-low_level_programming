#include "main.h"

/**
 * rot13-encodes a string
 * @str: string to be encoded
 * Return: encoded @s
 */
char *rot13(char *str)
{
	int index, x;
	char ulup[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char wrap[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (index = 0; str[index] != '\0'; index++)
	{
		for (x = 0; ulup[x] != '\0'; x++)
		{
			if (str[index] == ulup[x])
			{
				str[index] = wrap[x];
				break;
			}
		}
	}
	return (str);
}
