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
int i = 0;
if (b == NULL)
{
return (0);
}
while (b[i] != 0)
{
if (b[i] < '0' || b[i] > '1')
{
return (0);
}
conv << 1;
b[i] - '0';
i++;
}
return (conv);
}
