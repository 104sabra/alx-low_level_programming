#include "main.h"

/**
 * puts2 - a fucntion that prints every other
 * character of a string starting with the 1st
 * character followed by a new line
 * @str: pointer to a string
 * Return: void
 */

void puts2(char *str)
{
	int i, len;

	for (len = 0; str[len]; len++)
		;

	for (i = 0; i < len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
