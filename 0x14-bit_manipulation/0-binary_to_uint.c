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
unsigned int conv = 0;
int index = 0;
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
conv = (conv << 1) + (b[index] - '0');
}
return (conv);
}
