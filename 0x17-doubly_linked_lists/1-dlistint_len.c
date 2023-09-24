#include "lists.h"

/**
 * dlistint_len -  dlistint_t
 * @h: variable
 * Return: nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t nodes = 0;
while (h)
{
nodes++;
h = h->next;
}
return (nodes);
}
