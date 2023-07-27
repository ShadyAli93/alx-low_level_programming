#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - print the elements
 * @h: variable
 * Return: c
 */

size_t print_list(const list_t *h)
{
size_t c = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[0] %s\n", "(nil)");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
c++;
}
return (c);
}
