#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: string to be printed between the strings
 * @n: num of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;
	char *s;

	if (!separator)
		separator = "";

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(str, char *);
		printf("%s", (!s) ? "(nil)" : s);
		if (i < n - 1)
			printf("%s", separator);
	}

	va_end(str);

	printf("\n");
}
