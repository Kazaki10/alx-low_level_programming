#include "main.h"

/**
 *_memcpy - function that copies memory area.
 * *@dest: destination where data is stored
 *@src: source of data being coppied
 *@n: number of bytes
 *
 *Return: dest n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
