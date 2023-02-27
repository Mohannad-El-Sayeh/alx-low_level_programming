#include "main.h"

/**
 * rev_string - reverses a string variable.
 *
 * @s: The string you want to reverse.
 */
void rev_string(char *s)
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
		*str = *s;
		s--;
	}
}
