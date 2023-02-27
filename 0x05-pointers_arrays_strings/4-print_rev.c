#include "main.h"

/**
 * print_rev - prints a string in reverse.
 *
 * @s: The string you want to print.
 */
void print_rev(char *s)
{
	int length = 0, i;
	char *str = s;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
