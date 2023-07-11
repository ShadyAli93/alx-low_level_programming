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
pntr = malloc(sizeof(c) * size);
if (size == 0 || pntr == NULL)
return ("NULL");
for (i = 0; i < size; i++)
pntr[i] = c;
return (pntr);
}
