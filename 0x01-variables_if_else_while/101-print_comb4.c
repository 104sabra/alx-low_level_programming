#include <stdio.h>

/**
 * main - a program that prints all possible
 * different combos of 3 digits
 *
 * Return: Always 0
 */

int main(void)
{
	int i = 48;
	int j = 49;
	int k = 50;

	while (i <= 56)
	{
		while (j <= 57)
		{
			while (k <= 58)
			{
				if (j > i)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != 55 || j != 56 || k != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			j++;
		}
		i++;
		j = i + 1;
		k = j + 1;
	}
	putchar('\n');
	return (0);
}
