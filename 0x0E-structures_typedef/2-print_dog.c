#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
* print_dog -  function that prints a struct dog
* @d: pointer to struct
*
*
*
*
*/
void print_dog(struct dog *d)
{
if (d != NULL)
{
if (d->name == NULL)
{
	d->name = "(nil)";
}
else
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);

if (d->owner == NULL)
{
	d->owner = "(nil)";

}
else
printf("Owner: %s\n", d->owner);
}

}
