#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: int type num
 * Return: 1 if digit, 0 otherwise
 */

int _isdigit(int c)
{
	while (c >= 49 && c <= 57)
	{
		return (1);
	}
	return (0);
}
