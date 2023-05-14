#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to locate
 * Return: first occurence of c or NULL if c not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		s++;

	if (s[i] == c)
		return (s);
	else
		return (0);
}
