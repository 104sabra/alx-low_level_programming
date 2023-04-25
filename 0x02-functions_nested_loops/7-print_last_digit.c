#include "main.h"

/**
 * print_last_digit -  function that prints the last digit of a number
 * @num: the number
 * Return: 0
 */

int print_last_digit(int num)
{
	int lastD;

	lastD = num % 10;

	_putchar(lastD + '0');

	return(lastD);
}
