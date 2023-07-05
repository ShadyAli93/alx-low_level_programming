#include "main.h"
/**
 * int _strlen_recursion(char *s); -  rev_rec
 * @s: variable
 *
 */
int _strlen_recursion(char *s)
{
{
if (*s != '\0')
{
return;
}
_strlen_recursion(s + 1);
_putchar(*s);
}
