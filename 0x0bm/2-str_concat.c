#include "main.h"
#include <stdlib.h>
/**
* str_concat - get ends of input and add together for size
* @s1: input one to concat
* @s2: input two to concat
* Return: concat of s1 and s2
*/
char *str_concat(char *s1, char *s2)
{
char *conct;
int i, mi;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

i = mi = 0;
while (s1[i] != '\0')
i++;
while (s2[mi] != '\0')
mi++;
conct = malloc(sizeof(char) * (i + mi + 1));

if (conct == NULL)
return (NULL);
i = mi = 0;
while (s1[i] != '\0')
{
conct[i] = s1[i];
i++;
}

while (s2[mi] != '\0')
{
conct[i] = s2[mi];
i++, mi++;
}
conct[i] = '\0';
return (conct);
}
