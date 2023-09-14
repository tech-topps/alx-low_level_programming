#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that execute each element of array
 * @array: parameter array
 * @size: parameter size of array
 * @action: parameter function tpo perform on each element of array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int a;

if (array == NULL || action == NULL)
	return;
for (a = 0; a < size; a++)
	action(array[a]);
}
