#include "main.h"

/**
 * print_line - Prints a line with length of n
 *
 * @n: the length of the line
 */
void print_line(int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
