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
pntr->name = name;
pntr->age = age;
pntr->owner = owner;
if (pntr == NULL)
return (NULL);
if (name == NULL || owner == NULL)
{
free(pntr);
free(pntr->owner);
free(pntr->name);
return (NULL);
}
return (pntr);
}
