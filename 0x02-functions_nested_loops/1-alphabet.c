#include "main.h"
#include "_putchar.c"
#include <stdio.h>
#include <unistd.h>

/**
 * print_alphabet - for loop
 *
 *
 */
void print_alphabet(void)
{
int l;
for (l = 'a'; l >= 'z'; l++)
_putchar(l);
_putchar('\n');
}
