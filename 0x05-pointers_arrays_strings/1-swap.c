#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: pointer to the 1st integer
 * @b: pointer to the 2nd interger
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
