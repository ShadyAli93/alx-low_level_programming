#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *add_nodeint - adds a new node
 *@head: variable
 *@n: variable
 *Return: add
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *add;
add = malloc(sizeof(listint_t));
if (!add)
{
return (NULL);
}
add->n = n;
add->next = *head;
*head = add;
return (add);
}
