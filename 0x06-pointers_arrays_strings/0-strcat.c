#include "main.h"

/**
 * _strcat - concatinates two strings together
 *
 * @dest: The pointer for the first string
 * @src: The pointer for the second string
 *
 * Return: The concatinated string
 */
char *_strcat(char *dest, char *src)
{
	char *res = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	for (; *src != '\0'; src++)
	{
		*dest = *src;
		dest++;
	}
	*dest = '\0';
	return (res);
}
