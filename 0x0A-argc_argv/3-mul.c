#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: arguments count
 * @argv: arguments vektor
 * Return:If the program does not receive two arguments return 1
 *
 */
int main(int argc, char *argv[])
{
	int Total;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		Total = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", Total);
	}
	return (0);

}

