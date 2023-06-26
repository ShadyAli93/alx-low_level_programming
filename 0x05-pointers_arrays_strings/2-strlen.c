#include "main.h"

/**
*_strlen - print pointer
*@s: variables
*
*Return: v
*/

int _strlen(char *s)
{
int v;
for (v = 0; s[v] != '\0'; v++)
{
s++;
}
return (v);
}
