#include "main.h"
/**
 * print_last_digit -  a function that prints the last digit of a number.
 *
 *@m: integer
 * Return: last digit of a number
 */
int print_last_digit(int m)
{
	int n;

	n = m % 10;
	if (n < 0)
	{
		_putchar (-n + 0);
		return (-n);
	}
	else
	{
		_putchar(n + '0');
		return (n);
	}
}
