#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary number as a string
 *
 * Return: the unsigned form of b
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, base = 1, rem = 0;
	int i, len = 0;

	if (!b)
		return (0);
	while (b[len])
		len++;
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		rem = b[i] - '0';
		n += rem * base;
		base *= 2;
	}
	return (n);
}
