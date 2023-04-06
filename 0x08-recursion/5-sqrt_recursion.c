#include "main.h"

/**
 * root - check for the root number
 *
 * @a: int number
 * @b: int number
 * Return: func
 *
 */
int root(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (root(a + 1, b));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: given sqaure root of a number
 *
 * Return: result or -1 if n dosen't have square root .
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (root(1, n));
}
