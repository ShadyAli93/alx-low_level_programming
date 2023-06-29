#include "main.h"
/**
*_strcat - print pointer rev
*@dest: variables
*@src: variables
*Return: dest
*/
char *_strcat(char *dest, char *src)
{
int i;
int n = 0;

for (i = 0 ; i < n && src[i] != '\0' ; i++)
dest[i] = src[i];
dest[i] = '\0';

return (dest);
}
