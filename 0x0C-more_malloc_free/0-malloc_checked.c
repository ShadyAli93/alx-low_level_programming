#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: variable
 * Return: pntr
 */
void *malloc_checked(unsigned int b)
{
char *pntr;
pntr = malloc(b);
if (pntr == NULL)
exit(98);
return (pntr);
}
