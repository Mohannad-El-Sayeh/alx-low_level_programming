#include "main.h"

/**
 * swap_int - swaps the values of two int variables.
 *
 * @a: The pointer of the first variable.
 * @b: The pointer of the second variable.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
