#include "main.h"

/**
*print_rev - print pointer
*@s: variables
*
*
*/

void print_rev(char *s)
{
int c = 0;
int r;
while (c[s] != '\0')
c++;
for (r = c - 1; r >= 0; r--)
{
_putchar(s[r]);
}
_putchar('\n');
}
