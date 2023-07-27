#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 *sum_them_all - function that returns the sum of all its parameters.
 *@n: number of param
 *@...: variable number
 * Return: 0 if n == 0 otherwise sum.
 */
int sum_them_all(const unsigned int n, ...)
{

	va_list args;
	int sum = 0;
	unsigned int i;

	if (n == 0)
	return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int c = va_arg(args, int);

		sum += c;
	}
	va_end(args);
	return (sum);
}
