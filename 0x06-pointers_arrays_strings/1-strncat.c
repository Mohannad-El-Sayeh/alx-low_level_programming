#include "main.h"

/**
 * _strncat - concatinates two strings with a fixed length
 *
 * @dest: The pointer for the first string
 * @src: The pointer for the second string
 * @n: The length of the second string to be concatinated
 *
 * Return: The concatinated string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *res = dest;
	int i;

	while (*dest != '\0')
	{
		dest++;
	}
	for (i = 0; i < n && *src != '\0'; src++, i++)
	{
		*dest = *src;
		dest++;
	}
	for (; i < n; i++)
	{
		*dest = '\0';
		dest++;
	}
	return (res);
}
