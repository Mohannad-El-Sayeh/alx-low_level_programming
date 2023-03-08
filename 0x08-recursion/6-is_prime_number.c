#include "main.h"

/**
 * is_prime_number - Checks if the given number is prime.
 *
 * @n: The number you want to check
 *
 * Return: 1 if the number is prime, 0 otherwise,
 */
int is_prime_number(int n)
{
	int i;

	i = 2;
	if (n == 2)
		return (1);
	else if (n <= 1)
		return (0);
	else
		return (_is_prime(n, i));
}

/**
 * _is_prime - Helper function for is_prime_number.
 *
 * @n: The number to check.
 * @i: The integer to test as a possible divisor.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int _is_prime(int n, int i)
{
	if (n == i)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (_is_prime(n, i + 1));
}
