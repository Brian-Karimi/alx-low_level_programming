#include "main.h"

/**
 * _memcpy-copies  a memory area
 * @dest: destination where memory area will be copied to.
 * @src: memory area to be copied/ source
 * @n: number of byte at the source @src
 * Return:@dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
