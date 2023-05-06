#include "main.h"

/**
 * get_endianness- gets inputs endianness
 * Takes no argument
 * Return: 0 if big endian and 1 if little endian
*/

int get_endianness(void)
{
	int i = 1;
	char *ptr = (char *) &i;

	return (*ptr == 1);
}
