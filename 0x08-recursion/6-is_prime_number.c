#include "main.h"

/**
 * is_prime_number - determines if a number is prime or not
 * @n: integer
 * @i: divisor
 * Return: 1 if prime 0 otherwise
 */

int is_prime(int n, int i);

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime(n, n - 1));
}

/**
 * is_prime - recursively checks if n is prime or not
 * @n: integer input
 * @i: divisor integer
 * Return: 1 if the number is prime, 0 otherwise
 */

int is_prime(int n, int i)
{
	if (i <= 1)
		return (1);

	if ((i >= 1) && (n % i == 0))
		return (0);

	return (is_prime(n, i - 1));
}
