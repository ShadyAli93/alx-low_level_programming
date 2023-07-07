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
int i, l, sum = 0;
if (argc < 2)
printf("%d\n", 0);
else if (!isdigit(argc))
for (l = 0; l < argc; l++)
return (1);
else
for (i = 0; i < argc; i++)
sum += atoi(argv[i]);
printf("%d\n", sum);
return (0);
}
