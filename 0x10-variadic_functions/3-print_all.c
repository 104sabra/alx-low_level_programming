#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - a function that prints anything
 * @format: list of type of arguments passd to the function
 */

void print_all(const char * const format, ...)
{
	va_list any;
	int i;
	char c;
	int n;
	float f;
	char *s;

	va_start(any, format);

	i = 0;
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(any, int);
				printf("%c", c);
				break;
			case 'i':
				n = va_arg(any, int);
				printf("%i", n);
				break;
			case 'f':
				f = va_arg(any, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(any, char *);
				printf("%s", (!s) ? "(nil)" : s);
				break;
			default:
				break;
		}
		i++;
		if (format[i] && (format[i] == 'c' ||
				format[i] == 'i' ||
				format[i] == 'f' ||
				format[i] == 's'))
			printf(", ");
	}

	va_end(any);

	printf("\n");
}
