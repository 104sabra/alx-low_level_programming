#include "main.h"

/**
 * rev_string - a function that reverse a string
 * @s: the string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0, i = 0;
	char tmp;

	while (s[len] != '\0')
		len++;

	while (i < len / 2)
	{
		tmp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = tmp;
		i++;
	}
}
