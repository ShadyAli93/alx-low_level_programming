#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_listint - number of node
 *@h: variable
 *Return: node
*/
size_t print_listint(const listint_t *h)
{
size_t node = 0;
while (h)
{
printf("%d\n", h->n);
h = h->next;
node++;
}
return(node);
}
