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
int i, sum = 0;
if (argc == 0)
return (0);
for (i = 2; i < argc; i++)
{
if (!isdigit(*argv[i]))
{
printf("%s\n", "Error");
return (1);
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
