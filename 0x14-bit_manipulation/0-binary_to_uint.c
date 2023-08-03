#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - binary_to_uint
 *@b: variable
 *Return: conv and 0
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int conv;
if (b == NULL)
{
return (0);
}
while (b != NULL)
{
if (*b < '0' || *b > '1')
{
return (0);
}
conv <<= 1;
conv += *b++ - '0';
}
return (conv);
}
