#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/* more headers goes there  */
/* betty style doc for function main goes there*/
/**
 * main - Entry point of my program
 * This program generates a random number and determines whether it is
 * positive, negative, or zero.
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
		return (0);
}
