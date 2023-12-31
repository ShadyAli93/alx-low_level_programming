#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: variable
 * @size: variable
 * Return: pntr and 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *pntr;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
pntr = malloc(nmemb * size);
if (pntr == NULL)
return (NULL);
for (i = 0; i < (nmemb * size); i++)
pntr[i] = 0;
return (pntr);
}
