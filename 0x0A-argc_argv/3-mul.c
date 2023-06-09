#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *main -  multiplies two numbers.
 *
 * @argc: argument counter
 * @argv: argument vektor
 * Return: 1 for error
 */
int main(int argc, char *argv[])
{
	int sum, i;

	sum = 0;

	if (argc > 2)
	{
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
		printf("%d\n", sum);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
}
