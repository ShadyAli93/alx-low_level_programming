#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - dog
 * @d: variable
 * @name: variable
 * @age: variable
 * @owner: variable
 * Return: null
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == 0)
return;
d->name = name;
d->age = age;
d->owner = owner;
}
