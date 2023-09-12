#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure dog
 * @name: parameter name of the dog
 * @age: parameter age of the dog
 * @owner: parameter owner of the dog
 */

typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
