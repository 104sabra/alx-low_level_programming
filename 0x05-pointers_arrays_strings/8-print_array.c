#include <stdio.h>
#include "main.h"

/**
 * print_array - a function that prints n elements of an arr
 * of integers followed by a new line
 * @n: number of elements
 * @a: the array
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
