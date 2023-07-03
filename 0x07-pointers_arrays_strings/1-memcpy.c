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
char *pd = dest;
char *ps = src;
while (n > 0)
{
*pd = *ps;
pd++;
ps++;
n--;
}
return (dest);
}
