#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *main -  adds positive numbers.
 *
 * @argc: argument counter
 * @argv: argument vektor
 * Return: 1 if one of the number is containing symbols that aren't digits
 */
int main(int argc, char *argv[])
{
	int sum, i, j;

	sum = 0;

	if (argc > 1)
	{
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}
		printf("%d\n", sum);
	}
	else
	{
	printf("0\n");
	}
	return (0);
}
