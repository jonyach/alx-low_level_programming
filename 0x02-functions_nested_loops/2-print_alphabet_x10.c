#include "main.h"
/**
 *  print_alphabet_x10 - repeats the print_alphabet 10 times.
 * prints a-z and A-Z using putchar
 * return: value 0 (true)
 *
 */
void print_alphbet_x10(void)
{
	int n;
	char co;

	co = 0;

	while (co < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		co++;

		_putchar('\n');
	}
}
