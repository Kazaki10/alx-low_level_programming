#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * return: 0 always (success)
 */
void print_alphabet_x10(void)
{
	int i;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
