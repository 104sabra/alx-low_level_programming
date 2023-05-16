#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: new allocated containing the result of s1 + s2 + \0,
 * NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	len2 = 0;

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	s = (char *)malloc((len1 + len2 + 1) * sizeof(*s));

	if (s == NULL)
		return (NULL);

	for (i = 0; len1 > i; i++)
	{
		s[i] = s1[i];
	}

	for (j = 0; len2 > j; j++)
	{
		s[i] = s2[j];
		i++;
	}

	s[i] = '\0';
	return (s);
}
