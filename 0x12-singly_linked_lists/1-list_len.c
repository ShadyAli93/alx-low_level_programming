#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - list
 *@h: variable
 *Return: c
*/

size_t list_len(const list_t *h)
{
size_t c = 0;
while (h)
{
c++;
h = h->next;
}
return (c);
}
