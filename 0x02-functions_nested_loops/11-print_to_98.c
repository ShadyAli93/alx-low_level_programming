#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_to_98 - sum
 *@n: variable
 *
 */
void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
printf("%d, ", n--);
printf("%d\n", n);
}
else
{
while (n < 98)
printf("%d, ", n++);

printf("%d\n", n);
}
}
