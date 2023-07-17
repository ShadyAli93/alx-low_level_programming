#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - newdog
 * @name: variable
 * @age: variable
 * @owner: variable
 * Return: pntr
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *pntr;
pntr = malloc(sizeof(dog_t));
if (pntr == NULL)
return (NULL);
if (name == NULL)
{
free(pntr);
free(owner);
return (NULL);
}
if (owner == NULL)
{
free(pntr);
free(name);
return (NULL);
}
return (pntr);
}
