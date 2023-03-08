#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 *
 * @n: The number to calculate the square root of.
 *
 * Return: The natural square root of the number, or -1 if it doesn't exist.
 */

int _sqrt_recursion(int n)
{
	int i;

	i = 1;
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (_sqrt(n, i));
}

/**
 * _sqrt - Helper function for _sqrt_recursion.
 *
 * @n: The number to calculate the square root of.
 * @i: The integer to test as a possible square root.
 *
 * Return: The natural square root of the number, or -1 if it doesn't exist.
 */

int _sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (_sqrt(n, i + 1));
}
