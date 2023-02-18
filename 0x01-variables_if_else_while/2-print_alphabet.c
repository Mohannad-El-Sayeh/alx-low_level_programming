#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - The Starting point of the program
 *
 * Return: Ends the program with code 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
