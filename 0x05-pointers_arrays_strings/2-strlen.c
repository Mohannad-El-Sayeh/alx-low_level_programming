#include "main.h"

/**
 * _strlen - gets the length of a given string.
 *
 * @s: The string you want to get its length.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
