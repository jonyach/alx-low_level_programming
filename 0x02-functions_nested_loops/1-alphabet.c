#include "main.h"


/**
 * print_alphabet - prints the english alphabet from a-z.
 *
 * return: nothing
 */

void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
