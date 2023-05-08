#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals
 * @a: array
 * @size: size of diagonal
 */

void print_diagsums(int *a, int size)
{
	int i, sumL, sumR;

	sumL = 0;
	sumR = 0;

	for (i = 0; i < size; i++)
	{
		sumL += a[(i * size) + i];
		sumR += a[((size - 1) * i) + (size - 1)];
	}
	printf("%d, %d\n", sumL, sumR);
}
