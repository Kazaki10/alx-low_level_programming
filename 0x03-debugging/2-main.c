#include "main.h"
#include <stdio.h>


/**
*  * main - Entry point
*   *
*    * Description: This function prints the largest of three integers
*     *
*      * Return: Always 0 (Success)
*/
int main(void)
{
int a, b, c;
int largest;

a = 972;
b = -98;
c = 0;

largest = largest_number(a, b, c);

printf("%d is the largest number\n", largest);

return (0);
}
