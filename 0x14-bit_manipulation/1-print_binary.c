#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - binary
 *@n: variable
 *Return: NULL
*/

void print_binary(unsigned long int n)
{
if (n > 1)
print_binary(n >> 1);
_putchar((n & 1) + '0');
}
