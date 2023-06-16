#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - for loop
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char l;
char u;
for (l = 'a'; l <= 'z'; l++)
{
putchar(l);
}
for (u = 'A'; u <= 'Z'; u++)
{
putchar(u)
}
putchar('\n');
return (0);
}
