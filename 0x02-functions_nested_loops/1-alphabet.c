#include "main.h"

/**
 * print_alphabet - A function to print all alphabet in lower case.
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
