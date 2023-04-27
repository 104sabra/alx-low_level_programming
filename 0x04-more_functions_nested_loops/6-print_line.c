#include "main.h"

/**
 * print_line - draws a straight line
 * @n: number of times _ should be printed
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}

	_putchar('\n');
}
