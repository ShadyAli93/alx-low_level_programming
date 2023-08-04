#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *set_bit - set
 *@n: variable
 *@index: variable
 *Return: -1 and 1
*/

int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
{
return (-1);
}
*n = (*n | (1 << index));
return (1);
}
