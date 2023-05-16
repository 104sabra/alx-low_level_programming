#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars and initializes it
 * with a specific char
 * @size: size of array
 * @c: initialized char
 * Return: pointer to array or NULL if error
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	ar = (char *)malloc(size * sizeof(*ar));

	if (size == 0 || ar == 0)
		return (NULL);

	for (i = 0; size > i; i++)
		ar[i] = c;

	return (ar);
}
