#include "function_pointers.h"

/**
 * print_name-function that prints a name
 * @name: name to be printed
 * @f: function pointer return nothing
 * Return: 0 Always Success
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
