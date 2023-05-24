#include <stdio.h>

/**
 * op_add - performs addition
 * @a: integer
 * @b: integer
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - performs subtraction
 * @a: integer
 * @b: integer
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - performs multiplication
 * @a: integer
 * @b: integer
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - performs division
 * @a: integer
 * @b: integer
 * Return: the quotient
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - performs modulo
 * @a: integer
 * @b: integer
 * Return: remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
