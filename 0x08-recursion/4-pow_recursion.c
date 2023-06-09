#include "main.h"

/**
 *_pow_recursion -  the value of x raised to the power of y.
 *
 *@x:first value
 *@y:power valuee
 *Return: power of value x by y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
