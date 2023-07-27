#include "main.h"

/**
* is_prime_recursive - function to check if a number is prime
*
* @n: the number to check
* @d: current divisor being checked
*
* Return: 1 if prime, 0 otherwise
*/
int is_prime_recursive(int n, int d)
{
	if (n < 2)
	{
		return (0);
	}
	else if (d == 1)
	{
		return (1);
	}
	else if (n % d == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_recursive(n, d - 1));
	}
}

/**
* is_prime_number - checks number is prime
*
* @n: number to check
*
* Return: 1 if prime, 0 otherwise
*/
int is_prime_number(int n)
{
	return (is_prime_recursive(n, n - 1));
}
