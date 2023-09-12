#include "dog.h"
#include <stdio.h>

/**
 * init_dog - function that intializes a dog
 * @d: parameter pointer to dog
 * @name: parameter name of dog
 * @age: parameter age of dog
 * @owner: parameter name of owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
