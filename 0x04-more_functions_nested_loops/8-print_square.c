#include "main.h"
/**
* print_square -  prints a square, followed by a new line.
*@size: integer
*Return: 0 success
*/
void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i, p;

		for (i = 1; i <= size; i++)
		{
			for (p = 1; p <= size; p++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
