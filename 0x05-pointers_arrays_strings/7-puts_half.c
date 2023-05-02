#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: the string
 * Return: void
 */

void puts_half(char *str)
{
	int len, n;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 != 0)
		n = (len + 1) / 2;
	else
		n = (len / 2);

	while (n < len)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
