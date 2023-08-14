#include "main.h"

/**
 * get_endianness - end
 * Return: 0 and 1
 */
int get_endianness(void)
{
int n = 1;
char *e = (char *) &n;
if (*e == 1)
return (1);
else
return (0);
}
