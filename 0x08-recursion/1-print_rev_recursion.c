#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse using recersion.
 *
 * @s: a pointer for the first character of the string.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
