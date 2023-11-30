#include "main.h"

/**
 * print_binary - printsthe binary representation of a number
 * @n: num which is unsigned long
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	if ((n & 1) == 1)
		_putchar('1');
	else
		_putchar('0');
}
