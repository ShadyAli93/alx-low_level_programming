#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _isdigit - if
 *@c: variable
 *Return: 0 and 1
 */
int _isdigit(int c)
{
if (c >= 0 && c <= 9)
return (1);
else
return (0);
}
