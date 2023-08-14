#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * flip_bits - flip
 *@n: variable
 *@index: variable
 *Return: -1 and 1
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int c = 0;
unsigned int nm = n ^ m;
while (nm != 0)
{
if (nm & 1)
c++;
nm >>= 1;
}
return (c);
}
