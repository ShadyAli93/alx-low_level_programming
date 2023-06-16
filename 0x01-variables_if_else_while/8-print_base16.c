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
char l;
int n;
for (n = 0; n <= 9; n++)
{
putchar('0' + n);
}
for (l = 'a'; l <= 'f'; l++)
{
putchar(l);
}
putchar('\n');
return (0);
}
