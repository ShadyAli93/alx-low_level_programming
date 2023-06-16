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
int n = 0;
for (n = 0; n <= 9; n++)
{
putchar('0' + n);
if (n < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
