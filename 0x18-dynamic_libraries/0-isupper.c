#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _isupper - if
 *@c: variable
 *Return: 0 and 1
 */
int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
return (1);
else
return (0);
}
