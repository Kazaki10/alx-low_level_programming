#include "main.h"
/**
* print_diagonal - draws a diagonal line on the terminal.
*@n: integerr
*
* Return: 0 success
*/
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	int i, p;

	for (i = 1; i <= n; i++)
	{
		for (p = 1; p <= n; p++)
		{
			if (p == i)
				_putchar('\\');
			else if (p < i)
				_putchar(' ');
		}
		_putchar('\n');
	}
	}


}
