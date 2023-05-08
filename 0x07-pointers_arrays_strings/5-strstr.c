#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: the substring to be located
 * Return: pointer to the located substring, 
 * NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	/**
	 * if needle is the empty string
	 * the return value is always haystack itself
	 */

	if (needle[0] == '\0')
		return (haystack);

	i = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j] != '\0')
			{
				if (haystack[i + j] == needle[j])
				{
					continue;
				}
				else
				{
					break;
				}
				j++;
			}
			
			if (needle[j] == '\0')
				return (haystack + i);
		}
		i++;
	}
	return (0);

}
