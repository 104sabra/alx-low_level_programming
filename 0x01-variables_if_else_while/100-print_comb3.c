#include <stdio.h>

/**
 * main - a program that prints all possible
 * different combos of 2 digits
 *
 * Return: Always 0
 */

int main(void)
{
	int i = 48;
	int j = 49;

	while (i <= 56)
	{
		while (j <= 57)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);
				if (i != 56 || j != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
		j = i + 1;
	}
	putchar('\n');
	return (0);
}
