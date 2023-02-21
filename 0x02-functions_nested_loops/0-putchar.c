#include<stdio.h>
#include "main.h"
/**
 * main -prints the string "_putchar" from array character
 *
 * return: 0 on success
 *
 */
 int main (void)
{
	char c[] = "putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);

}
