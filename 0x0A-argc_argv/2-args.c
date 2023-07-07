#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
* main - argc and argv
* @argc: variable
* @argv: variable
* Return: 0;
*/
int main(int argc, char *argv[])
{
int i;
for (int i; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
