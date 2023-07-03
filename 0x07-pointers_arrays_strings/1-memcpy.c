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
int i = 0;
for (; i < n; i++)
dest[i] = src[i];
return (dest);
}
