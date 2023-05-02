#include "main.h"

/**
 * print_rev - a function that prints a string in reverse
 * @s: the 1st character
 * Return: void
 */

int _strlen(char *s);

void print_rev(char *s)
{
	int len = _strlen(s);
	int i;

	/** a reverse loop
	 * iterate over the string
	 * starting from the last character
	 */
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
