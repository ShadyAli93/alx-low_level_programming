#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_triangle - for loop
 *@size: variable
 *
 *
 */
void print_triangle(int size)
{
int r, c;
if (size <= 0)
{
_putchar('\n');
}
for (r = 0; r <= size; r++)
{
for (c = 0; c <= r; c++)
{
_putchar('#');
}
_putchar('\n');
}
}
