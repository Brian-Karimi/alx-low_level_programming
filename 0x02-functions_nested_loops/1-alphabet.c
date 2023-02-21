#include "main.h"

/**
 * main- entry point
 * Description: Printing all alphabets in lowercase
 *
 * Return:0 success
 *
 */
void print_alphabet(void);

int main(void)
{
	char az[] = "abcdefghijklmnopqrstuvwxyz";
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(az[x]);
	}
	_putchar('\n');
	return (0);
}
