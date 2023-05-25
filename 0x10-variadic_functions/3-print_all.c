#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - prints char format
 * @l: va_list
 */

void print_char(va_list l)
{
	char c = va_arg(l, int);

	printf("%c", c);
}

/**
 * print_int - prints int format
 * @l: va_list
 */

void print_int(va_list l)
{
	int n = va_arg(l, int);

	printf("%i", n);
}

/**
 * print_float - prints float format
 * @l: va_list
 */

void print_float(va_list l)
{
	double f = va_arg(l, double);

	printf("%f", f);
}

/**
 * print_string - prints string format
 * @l: va_list
 */

void print_string(va_list l)
{
	char *s = va_arg(l, char *);

	printf("%s", (!s) ? "(nil)" : s);
}

/**
 * print_all - a function that prints anything
 * @format: list of type of arguments passd to the function
 */

void print_all(const char * const format, ...)
{
	va_list any;
	int i;

	va_start(any, format);

	i = 0;
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				print_char(any);
				break;
			case 'i':
				print_int(any);
				break;
			case 'f':
				print_float(any);
				break;
			case 's':
				print_string(any);
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
