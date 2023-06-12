#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars, and initializes it with a specific char.
 *
 *@size: size of string
 *@c: char 
 *@string: the actual string
 *@i: increment for i 
 *@Return: return NULL if size is 0 or string is null 
 */
char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int i;

	string = malloc(sizeof(char) * size);
	if (size == 0 || string == NULL)
	{
		return (NULL);
	}
	
	for (i = 0; i < size; i++)
	string[i] = c;
	return (string);	
}
