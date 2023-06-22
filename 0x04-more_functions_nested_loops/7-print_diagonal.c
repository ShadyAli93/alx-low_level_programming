#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_diagonal - for loop
 *@n: variable
 *
 *
 */
void print_diagonal(int n)
{
int i, j;
if (n <= 0)
{
_putchar('\n');
}
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
