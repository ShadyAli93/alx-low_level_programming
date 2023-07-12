#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - cent
 * @argc: variable
 * @argv: variable
 * Return: null and pntr
 */
int main(int argc, char *argv[])
{
int  cent, coins;
if (argc != 2)
{
printf("%s\n", "Error");
return (1);
}
cent = atoi(argv[1]);
while (cent >= 25)
{
cent -= 25;
coins++;
}
while (cent >= 10)
{
cent -= 10;
coins++;
}
while (cent >= 5)
{
cent -= 5;
coins++;
}
while (cent >= 2)
{
cent -= 2;
coins++;
}
if (cent == 1)
coins++;
printf("%d\n", coins);
return (0);
}
