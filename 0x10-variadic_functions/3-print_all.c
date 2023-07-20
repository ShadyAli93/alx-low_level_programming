#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - print
 * @format: variable
 * Return: 0
 */
void print_all(const char * const format, ...)
{
va_list ap;
int i = 0;
char *s;
va_start(ap, format);
while (format != NULL)
{
switch (format[i])
{
case 'c':
printf("%c", (char) va_arg(ap, int));
break;
case 'i':
printf("%i", va_arg(ap, int));
break;
case 'f':
printf("%f", va_arg(ap, double));
break;
case 's':
s = va_arg(ap, char *);
if (s == NULL)
{
printf("(nil)");
break;
}
printf("%s", s);
break;
}
if (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
format[i] == 's')
printf(",");
i++;
}
va_end(ap);
printf("\n");
}
