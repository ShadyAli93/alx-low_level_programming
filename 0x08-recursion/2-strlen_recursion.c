#include "main.h"
/**
 * _strlen_recursion -  stl_rec
 * @s: variable
 *Return: 1 and 0
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
