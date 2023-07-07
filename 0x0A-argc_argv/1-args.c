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
(void)*argv;
printf("%d\n", argc);
return (0);
}
