#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: num of times it should be printed
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; i++)
			{
				if (j == i)
					_putchar(' ');
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');	
		}	
	}
}
