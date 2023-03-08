#include "main.h"

/**
 * _pow_recursion - raises an integer to the power of another integer.
 *
 * @x: Base.
 * @y: Power.
 *
 * Return: The Result.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
