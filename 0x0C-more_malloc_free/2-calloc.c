#include <stdlib.h>
#include "main.h"

/**
*_memset - fills memory with a constant byte
* @s: memory area to be filled
* @b: char to copy
* @n: number of times to copy b
*
* Return: pointer s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}

/**
*_calloc - allocates memory for an array
* @nmemb: number of elements in the array
* @size: size of each element
*
* Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *anm;

if (nmemb == 0 || size == 0)
return (NULL);

anm = malloc(size * nmemb);

if (anm == NULL)
return (NULL);

_memset(anm, 0, nmemb * size);

return (anm);
}

