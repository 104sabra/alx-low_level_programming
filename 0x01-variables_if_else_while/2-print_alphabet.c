#include <stdio.h>

/**
 * main - a program that prints the alphabet in lowercase
 *
 * Return: Always 0
 */

int main(void)
{
	char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	return (0);
}
