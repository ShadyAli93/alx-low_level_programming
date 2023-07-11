#include "main.h"
#include <stdlib.h>
/**
* create_array - array of chars
* @size: variable
* @c: variable
* Return: 0;
*/
char *create_array(unsigned int size, char c)
{
char *pntr;
unsigned int i;
if (size == 0)
return (NULL);
pntr = malloc(sizeof(c) * size);
if (pntr == NULL)
return (NULL);
for (i = 0; i < size; size++)
pntr[i] = c;
return (pntr);
}
