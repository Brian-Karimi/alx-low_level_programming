#include "main.h"
#include <stdio.h>

/**
 * rev_string-reverses a string
 * @s:Pointer Variable
 * Return: void
 */
void rev_string(char *s)
{
	char *a;
	char *om;
	char temp_variable;

	a = s;
	om = s;

	while (om != '\0')
	{
		om++;
	}
	om--;
	while (om  > a)
	{
		temp_variable = *a;
		*a = *om;
		*om = temp_variable;
		a++;
		om--;
	}
}
