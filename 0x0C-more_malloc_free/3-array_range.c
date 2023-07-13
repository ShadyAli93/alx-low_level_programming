#include "main.h"
#include <stdlib.h>
/**
 * array_range - allocates memory for an array
 * @min: variable
 * @max: variable
 * Return: pntr and null
 */
int *array_range(int min, int max)
{
int *pntr, i;
if (min > max)
return (NULL);
pntr = malloc(sizeof(int) * ((max - min)) + 1);
if (pntr == NULL)
return (NULL);
for (i = 0; i < ((max - min) + 1); i++)
pntr[i] = min + i;
return (pntr);
}
