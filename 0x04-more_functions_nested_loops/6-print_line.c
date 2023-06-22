#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_line - for loop
 *
 *
 *
 */
void print_line(int n)
{
int l;
if (n <= 0)
{
_putchar('\n');
}
for (l = 0; l < n; l++)
{
_putchar('_');
}
_putchar('\n');
}
