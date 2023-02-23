#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14, 10 times.
 */
void more_numbers(void)
{
	int i, j, k;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
				_putchar('1');

			k = i % 10;
			_putchar(k + '0');
		}
		_putchar('\n');
	}
}
