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
	char n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	n = 'a';
	while (n <= 'f')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
