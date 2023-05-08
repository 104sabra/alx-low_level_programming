#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: accepted bytes
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int b = 0;
	int j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				b++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (b);
}
