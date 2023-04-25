#include "main.h"

/**
 * _islower - checks for lowercase character
 */

int _islower(int c)
{
	while (c >= 'a' && c <= 'z')
	{
		return 1;
	}
	return 0;
}
