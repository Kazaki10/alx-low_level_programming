#include "dog.h"
#include <stdlib.h>

/**
* _strlen - returns the length of string
* @st: string
* Return: length of a string
**/
int _strlen(char *st)
{
int i;

i = 0;
while (st[i] != '\0')
{
i++;
}
return (i);
}

/**
* _strcpy - copy a string to destination
* @dest: pointer to buffer
* @src: string copied
* Return: destination
*/
char *_strcpy(char *dest, char *src)
{
int i, l;

l = _strlen(src);

for (i = 0; i < l; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';

return (dest);
}

/**
* new_dog - create a new dog
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
* Return: pointer to new dog successful, or NULL if it fails.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
int ls, lss;

ls = _strlen(name);
lss = _strlen(owner);

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);

new_dog->name = malloc(sizeof(char) * (ls + 1));
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}

new_dog->owner = malloc(sizeof(char) * (lss + 1));
if (new_dog->owner == NULL)
{
free(new_dog);
free(new_dog->name);
return (NULL);
}

_strcpy(new_dog->name, name);
_strcpy(new_dog->owner, owner);
new_dog->age = age;

return (new_dog);
}

