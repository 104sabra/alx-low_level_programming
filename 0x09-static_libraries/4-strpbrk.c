#include "main.h"

/**
 * _strpbrk - locates the 1st ocuurence in s of any
 * of the bytes in the string accept
 * @s: string searched
 * @accept: accepted bytes
 * Return: pointer to the match or NULL if not found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				return (p);
			}
		}
	}
	return (0);
}
