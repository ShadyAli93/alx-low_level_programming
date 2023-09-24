#include "lists.h"
/**
 * sum_dlistint - sum
 *@head: variable
 * Return: i
 */

int sum_dlistint(dlistint_t *head)
{
int i = 0;
while (head)
{
i += head->n;
head = head->next;
}
return (i);
}
