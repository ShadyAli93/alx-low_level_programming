#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - argc and argv
* @argc: variable
* @argv: variable
* Return: 0 and 1;
*/
int main(int argc, char *argv[])
{
int i, c, sum = 0;
char err[] = "Error";
if (argc == 1)
return (0);
for (i = 1; i < argc; i++)
{
for (c = 0; c != '\0'; c++)
{
if (!isdigit(argv[i][c]))
{
printf("%s\n", err);
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
