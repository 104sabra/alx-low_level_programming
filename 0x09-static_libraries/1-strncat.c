#include "main.h"

/**
 * _strncat - concatenates 2 string using at most n bytes from src
 * @dest: final string
 * @src: source string
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
		i++;

	j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src [i];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
