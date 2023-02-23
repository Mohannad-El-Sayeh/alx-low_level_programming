#include "main.h"

/**
 * print_last_digit - Gets the absolute value of the last integer.
 *
 * @n: The number you want to get the last digit of.
 *
 * Return: Absolute value of last digit in i.
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i < 0)
	{
		_putchar(-i + 48);
		return (-i);
	}
	_putchar(i + 48);
	return (i);
}
