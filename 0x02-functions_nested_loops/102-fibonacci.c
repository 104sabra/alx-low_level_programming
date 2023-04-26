#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int count = 1;
	int fib1 = 1;
	int fib2 = 2;
	int x;

	printf("%i, ", fib1);

	while (count < 50)
	{
		printf("%i, ", fib2);

		x = fib2;
		fib2 = fib2 + fib1;
		fib1 = x;
		count++;
	}

	printf("%i\n", fib2);

	return (0);
}
