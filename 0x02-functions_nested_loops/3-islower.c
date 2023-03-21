#include "main.h"
/**
 * _islower - is a function that checks for lowercase character
 *
 * @c: characters of ascii code
 *
 * Return:1 if c is lowercase . 0 for else .
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
{
	return (1);
}
	else
{
	return (0);
}
_putchar('\n');
}
