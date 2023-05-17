#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: argument count
 * @av: argument vector double pointer
 * Return: pointer to a new string or NULL on failure
 */

char *argstostr(int ac, char **av)
{
	char *outP;
	int i, j, len, pos;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;
	i = 0;

	while (av[i] != NULL)
	{
		j = 0;

		while (av[i][j] != '\0')
		{
			len++;
			j++;
		}
		len++;
		i++;
	}

	outP = (char *)malloc((len + 1) * sizeof(char));
	if (outP == NULL)
		return (NULL);

	pos = 0;
	i = 0;

	while (av[i] != NULL)
	{
		j = 0;

		while (av[i][j] != '\0')
		{
			outP[pos] = av[i][j];
			pos++;
			j++;
		}

		outP[pos] = '\n';
		pos++;
		i++;
	}

	outP[len] = '\0';
	return (outP);
}
