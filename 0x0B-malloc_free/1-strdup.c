#include <stdlib.h>
#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memory which contains a copy of the string given as parameter
 * @str: string parameter
 * Return: copy of the string
 */
char *_strdup(char *str)
{
	int i, len = 0;
	char *copy;

	while (str[len] != '\0')
		len++;

	copy = (char *)malloc((len + 1) * sizeof(*copy));

	if (str == NULL || copy == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		copy[i] = str[i];
	}

	copy[i] = '\0';
	return (copy);

}
