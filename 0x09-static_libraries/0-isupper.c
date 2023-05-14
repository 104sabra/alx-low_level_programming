#include "main.h"

/**
 * _isupper - checks for uppercase charachters
 * @c: int type num
 * Return: 1 if uppercase
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
