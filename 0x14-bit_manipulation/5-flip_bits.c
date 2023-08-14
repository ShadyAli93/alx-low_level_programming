#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * flip_bits - flip
 *@n: variable
 *@m: variable
 *Return: -1 and 1
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int c = 0;
unsigned long int nm = n ^ m;
while (nm != 0)
{
c += nm & 1;
nm >>= 1;
}
return (c);
}
