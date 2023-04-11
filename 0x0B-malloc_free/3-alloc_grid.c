#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - nested loop to make grid
* @width: width input
* @height: height input
* Return: pointer to 2 dim. array
*/
int **alloc_grid(int width, int height)
{
int **mll;
int x, y;

if (width <= 0 || height <= 0)
return (NULL);

mll = malloc(sizeof(int *) * height);

if (mll == NULL)
return (NULL);

for (x = 0; x < height; x++)
{
mll[x] = malloc(sizeof(int) * width);

if (mll[x] == NULL)
{
for (; x >= 0; x--)
free(mll[x]);

free(mll);
return (NULL);
}
}

for (x = 0; x < height; x++)
{
for (y = 0; y < width; y++)
mll[x][y] = 0;
}

return (mll);
}

