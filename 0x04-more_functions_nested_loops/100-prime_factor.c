#include <stdio.h>

/**
 * main - prints the largest prime of 612852475143
 * Return: 0
 */

int main(void)
{
	int a = 2;
	long n = 612852475143;

	while (a != n)
	{
		if (n % a == 0)
		{
			n = n / a;
		}
		else
		{
			a++;
		}
	}
	printf("%l\n", n);
	return (0);
}
