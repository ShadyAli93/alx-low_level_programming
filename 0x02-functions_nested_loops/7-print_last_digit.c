#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_last_digit - if
 *@l: variable
 *Return: last
 */
int print_last_digit(int l)
{
int last = l % 10;
if (last < 0)
last *= -1;
_putchar (last + '0');
return (last);
}
