#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: this is the variable to be checked
 * Return: 1 if c is alphabetic, otherwise 0
 */

int _isalpha(int c)
{
	while ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
