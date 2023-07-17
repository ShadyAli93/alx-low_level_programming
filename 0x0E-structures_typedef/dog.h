#ifndef DOG
#define DOG
/**
 * struct dog - dog
 * @name: variable
 * @age: variable
 * @owner: variable
 *
 */

struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dogs;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
