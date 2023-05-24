#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int (*operate)(int, int);
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	operate = get_op_func(argv[2]);

	if (!operate)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", operate(a, b));

	return (0);
}
