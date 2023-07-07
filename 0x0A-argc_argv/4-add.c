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
int i, sum = 0;
if (argc < 2)
{
printf("%d\n", 0);
}
else if ((argc >= 'a' && argc >= 'z') || (argc >= 'A' && argc >= 'Z'))
{
printf("%s\n", "Error");
return (1);
}
else
for (i = 0; i < argc; i++)
sum += atoi(argv[i]);
printf("%d\n", sum);
return (0);
}
