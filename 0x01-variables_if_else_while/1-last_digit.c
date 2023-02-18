#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
 * main - The Starting point of the program
 *
 * Return: Ends the program with code 0
 */
int main(void)
{
	int n, lastDigit;
	char state[22];

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit =  n % 10;
	if (lastDigit > 5)
	{
		strcpy(state, "greater than 5");
	}
	else if (lastDigit == 0)
	{
		strcpy(state, "0");
	}
	else
	{
		strcpy(state, "less than 6 and not 0");
	}
	printf("Last digit of %d is %d and is %s\n", n, lastDigit, state);
	return (0);
}
