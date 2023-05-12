#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: arguments count
 * @argv: vector of arguments
 * Return: 0 or 1 if error
 */

int main(int argc, char *argv[])
{
	int product;

	if (argc == 3)
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", product);
		return (0);
	}
	else
	{
                printf("Error\n");
		return (1);
	}
}
