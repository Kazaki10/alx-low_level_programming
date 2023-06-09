#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *
 *
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	int sum, i;

	sum = 0;
	
	if (argc > 1)
	{
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
		printf("%d\n", sum);
	}
	else if (argc < 2)
	{
	printf("Error\n");
	return (1);
	}	
}
