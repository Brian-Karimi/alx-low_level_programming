#include "main.h"

/**
 * get_endianness-check for endianness
 * Return: 1 if small endian and 0 if big endian
 **/

int get_endianness(void)
{
	char *test_var;
	int i;

	i = 1;
	test_var = (char *)&i;
	return ((int)test_var[0]);
}
