#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_sign - if
 *@n: variable
 *Return: 0 and 1 and -1
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar ('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
