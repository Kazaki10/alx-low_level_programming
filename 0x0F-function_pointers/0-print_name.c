#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @f:pointer to func
 * @name: string to be added
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	f(name);

}
