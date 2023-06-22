#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * more_numbers - for loop
 *
 *
 *
 */
void more_numbers(void)
{
int n, l;
for (l = 0; l <= 10; l++)
{
for (n = 0; n <= 14; n++)
{
if (n > 9)
{	
_putchar((n / 10) + '0');
}
_putchar((n % 10) + '0');
}
}
_putchar('\n');
}
