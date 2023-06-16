#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - for loop with if
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
for (n = 0\1; n <= 99; n++)
{
putchar('0' + n);
if (n < 99)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
