#include <stdio.h>

/**
 * main - a program that prints the alphabet in lowercase
 * and then in uppercase followed by a new line
 *
 * Return: Always 0
 */

int main(void)
{
	char letter = 'a';
	char Letter = 'A';

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (Letter = 'A'; Letter <= 'Z'; Letter++)
		putchar(Letter);
	putchar('\n');

	return (0);
}
