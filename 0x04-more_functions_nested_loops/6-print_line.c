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
int i;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
