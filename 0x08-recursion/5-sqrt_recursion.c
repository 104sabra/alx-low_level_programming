#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: integer input
 * @i: integer value
 * Return: -1 if n does not have sqrt
 */

int taking_the_square_root(int n, int i);

int _sqrt_recursion(int n)
{
	return (taking_the_square_root(n, 1));
}

/**
 * taking_the_square_root - finds square root
 * @n: radicand
 * @i: integer
 * Return: -1 if natural square root not found
 */

int taking_the_square_root(int n, int i)
{
	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1);

	return (taking_the_square_root(n, i + 1));
}
