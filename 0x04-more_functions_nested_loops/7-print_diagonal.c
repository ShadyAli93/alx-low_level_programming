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
int i;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
_putchar('\\');
}
_putchar('\n');
}
}
