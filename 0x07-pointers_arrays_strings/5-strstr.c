#include "main.h"

/**
 * _strstr- locates a substring
 * @haystack:source string to search for  the matching substring
 * @needle: it is the substr8ng to be searched for @haystack
 * Return: return a pointer to the begining of @needle or NULL is no matching substrings are identified
 */
char *_strstr(char *haystack, char *needle)
{
	char *help, *n;

	while (*haystack != '\0')
	{
		help = haystack;
		n = needle;

		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
		{
			return (help);
		}
		haystack++;
	}
	return ('\0');
}
