#include "main.h"
#include <unistd.h>

/**
 * _puts - prints a string to the standard output.
 *
 * @str: The string you want to print.
 */
void _puts(char *str)
{
	int length = 0;
	char *s = str;

	while (*str != '\0')
	{
		length++;
		str++;
	}
	write(1, s, length);
	write(1, "\n", 1);
}
