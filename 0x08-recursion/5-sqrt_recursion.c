#include "main.h"

/**
* root - check for the root number
*
* @a: int number
* @b: int number
* Return: square root or -1 if not found
*/
int root(int a, int b)
{
	if (a * a == b)
{
		return (a);
}
	else if (a * a > b)
{
		return (-1);
}
	else
{
		return (root(a + 1, b));
}
}

/**
* _sqrt_recursion - returns the natural square root of a number.
*
* @n: given square root of a number
* Return: result or -1 if n doesn't have a square root.
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
{
		return (-1);
}
	else
{
		return (root(1, n));
}
}

