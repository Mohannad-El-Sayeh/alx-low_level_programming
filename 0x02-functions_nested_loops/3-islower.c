#include "main.h"

/**
 * _islower - Checks if a given character is lowercase.
 *
 * @c: The character you want to check
 *
 * Return: 1 if the character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
