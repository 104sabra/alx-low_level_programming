#include "main.h"

/**
 * _strcat - appends the src string to the dest
 * string overwriting the terminating null byte
 * at the end of dest then add a terminating null byte
 * @dest: the string to be appended to
 * @src: the string that will be appended
 * Return: resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i;

	char lendest = 0;

	while (*dest != '\0')
	{
		lendest++;
		dest++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[lendest + i] = src[i];
	}
	dest[lendest + i] = '\0';
	return (dest);
}
