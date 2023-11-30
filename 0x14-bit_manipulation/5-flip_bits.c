#include "main.h"

/**
 * flip_bits - flips bits
 * @n: initial number
 * @m: flipped number
 * Return: the number of bits needed for flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int f, c = 0;

	f = n ^ m;
	while (f > 0)
	{
		c += f & 1;
		f >>= 1;
	}
	return (c);
}
