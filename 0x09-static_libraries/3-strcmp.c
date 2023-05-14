#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if equal, -n if s1 < s 2, n if s1 > s2
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		diff = s1[i] - s2[i];

		if (diff != 0)
		{
			return (diff);
		}
		i++;
	}
	return (diff);
}
