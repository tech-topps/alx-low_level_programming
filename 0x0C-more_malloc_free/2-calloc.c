#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocate memory for an array
 * @nmemb: parameter number of array
 * @size: parameter size of array
 * Return: pointer to new memory allocated
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *out;

if (nmemb == 0 || size == 0)
	return (NULL);
out = calloc(nmemb, size);
if (out == NULL)
	return (NULL);
else
	return (out);
}
