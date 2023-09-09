#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - function that creates array of integer
 * @min: parameter minimum number in array
 * @max: parameter maximum number in array
 * Return: newly allocated memory
 */

int *array_range(int min, int max)
{
int *out;
int size;
int a;

if (min > max)
	return (NULL);
size = (max - min) + 1;
out = malloc(sizeof(int) * size);
if (out == NULL)
	return (NULL);
for (a = 0; min <= max; a++)
	out[a] = min++;
return (out);
}
