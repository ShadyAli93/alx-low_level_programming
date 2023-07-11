#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - grid
 * @width: variable
 * @height: variable
 * Return: null and pntr
 */
int **alloc_grid(int width, int height)
{
int **pntr;
int i, n;
if (width < 1 || height < 1)
return (NULL);
pntr = malloc(height * sizeof(int *));
if (pntr == NULL)
{
free(pntr);
return (NULL);
}
for (i = 0; i < height; i++)
{
pntr[i] = malloc(width * sizeof(int));
if (pntr[i] == NULL)
{
for (i--; i >= 0; i--)
free(pntr[i]);
free(pntr);
return (NULL);
}
}
for (i = 0; i < height; i++)
for (n = 0; n < width; n++)
pntr[i][n] = 0;
return (pntr);
}

