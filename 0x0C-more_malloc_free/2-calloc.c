#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: variable
 * @size: variable
 * Return: pntr and 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *pntr;
pntr = malloc(nmemb * size);
if (nmemb == 0 || size == 0)
return (NULL);
if (pntr == NULL)
return (NULL);
memset(pntr, 0, nmemb * size);
return (pntr);
}
