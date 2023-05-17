#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculates the min num needed to make change
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 or 1 on failure
 */

int main(int argc, char *argv[])
{
	int coins, cents;

	coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		switch (cents)
		{
			case 25:
				cents -= 25;
				coins++;
				break;
			case 10:
				cents -= 10;
				coins++;
				break;
			case 5:
				cents -= 5;
				coins++;
				break;
			case 2:
				cents -= 2;
				coins++;
				break;
			case 1:
				cents -= 1;
				coins++;
				break;
			default:
				break;
		}
	}

	printf("%d\n", coins);
	return (0);
}
