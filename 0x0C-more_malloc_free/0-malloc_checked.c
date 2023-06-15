#include <stdlib.h>
#include "main.h"

/**
* *malloc_checked - allocate memory using malloc
* @b: number of bytes to allocate
*
*Return: a pointery
*/
void *malloc_checked(unsigned int b)
{
void *anm;

anm = malloc(b);

if (anm == NULL)
exit(98);

return (anm);
}

