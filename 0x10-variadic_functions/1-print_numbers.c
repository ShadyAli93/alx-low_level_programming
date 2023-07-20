#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - print
 * @separator: variable
 * @n: variable
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
va_start(ap, n);
for (i = 0; i < count; i++)
printf("%d", va_arg(ap, int);
if (separator != NULL)
printf("%s", separator);
va_end(ap);
printf("\n");
}
