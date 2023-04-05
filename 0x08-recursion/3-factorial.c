#include "main.h"

/**
 * int factorial -  function that returns the factorial of a given number.
 *
 * @n: given factorial number
 *
 * Return: -1 to indicate error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return(1);

	return	(n * factorial(n - 1));

}
