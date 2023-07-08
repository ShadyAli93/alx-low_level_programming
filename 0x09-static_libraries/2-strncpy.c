#include "main.h"
/**
 * _strncpy - concatenate two strings
 * @dest: variables
 * @src: variables
 * @n: variables
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}

