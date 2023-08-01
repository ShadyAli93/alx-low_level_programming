#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - list elements
 *@h: variable
 *Return: elements
*/
size_t listint_len(const listint_t *h)
{
size_t elements = 0;
while (h)
{
h = h->next;
elements++;
}
return (elements);
}
