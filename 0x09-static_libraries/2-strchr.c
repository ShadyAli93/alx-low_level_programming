#include "main.h"
#include <stddef.h>
/**
 * _strchr -  locates a character
 * @s: variable
 * @c: variable
 * Return: s
 */
char *_strchr(char *s, char c)
{
for (; *s != '\0'; s++)
{
if (*s == c)
{
return (s);
}
}
if (c == '\0')
{
return (s);
}
return (NULL);
}
