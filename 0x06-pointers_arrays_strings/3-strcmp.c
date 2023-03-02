#include "main.h"

/**
 * _strcmp - compares between two strings
 *
 * @s1: The first string
 * @s2: The second string
 *
 * Return: 15, 0, or -15 if the first string is larger,
 * equal, or less than the second string, respectivly.
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && ((*s1 != '\0') && (*s2 != '\0')))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
