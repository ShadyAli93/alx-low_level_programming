#include "main.h"
/**
 * _memcpy -  copy memory
 * @dest: variable
 * @src: variable
 * @n: variable
 * Return: s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
