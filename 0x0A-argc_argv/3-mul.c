#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
* main - argc and argv
* @argc: variable
* @argv: variable
* Return: 0 and 1;
*/
int main(int argc, char *argv[])
{
int  multi = 0;
char err = "Error";
if (argc < 2)
{
printf("%s\n", err);
return (1);
}
else
{
multi = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", multi);
return (0);
}
}
