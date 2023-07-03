#include "main.h"
/**
 * print_chessboard -  Chess
 * @a: variable
 */
void print_chessboard(char (*a)[8])
{
int h, l;
for (h = 0; h < 8; h++)
{
for (l = 0; l < 8; l++)
{
_putchar(a[h][l]);
}
}
}
