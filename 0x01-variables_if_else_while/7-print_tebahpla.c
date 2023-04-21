#include <stdio.h>

/**
 * main - a program that prints the lowercase alphabet in reverse
 *
 * Return: Always 0
 */

int main(void)
{
	char letter = 'z';

	for (letter = 'z'; letter >= 'z'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
