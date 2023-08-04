#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_bit - bit
 *@n: variable
 *@index: variable
 *Return: -1 and bit
*/

int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int bit;
if (index >= (sizeof(unsigned long int)))
return (-1);
bit = n >> index;
return (bit & 1);
}
