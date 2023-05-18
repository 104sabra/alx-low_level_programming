#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - a function that creates an array of integers
 * @min: minimum value (included)
 * @max: maximum value (included)
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		min++;
		arr[i] = min;
	}

	return (arr);
}
