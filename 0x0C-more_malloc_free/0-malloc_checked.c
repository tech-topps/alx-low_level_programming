#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: parameter size of memory
 * Return: pointer to new memory allocated
 */

void *malloc_checked(unsigned int b)
{
char *out;

out = malloc(b);
if (out == NULL)
	exit(98);
else
	return (out);
}
