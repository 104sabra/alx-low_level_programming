#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to 1st string
 * @s2: pointer to 2nd string
 * @n: number of bytes from s2 to concatenate with s1
 * @s: string
 * Return: pointer to allocated memory, NULL on failure
 */

int _strlen(char *s);

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len1, len2, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
		n = len2;

	p = malloc((len1 + n + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);

	for (i = 0; len1 > i; i++)
		p[i] = s1[i];

	for (i = 0;  n > i; i++)
		p[len1 + i] = s2[i];

	p[len1 + i] = '\0';

	return (p);
}


/**
 * _strlen - gets the length of a string
 * @s:  pointer to the input string
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int len;

	len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
