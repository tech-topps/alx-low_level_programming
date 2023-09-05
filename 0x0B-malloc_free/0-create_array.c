#include "main.h"

/**
 * create_array - function that create array
 * @size: parameter size of array
 * @c: parameter character to store in array
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
char *ary;
unsigned int a;

ary = malloc(sizeof(char) * size);

if (ary == NULL)
	return (NULL);

if (size == 0)
	return (NULL);

for (a = 0 ; a < size ; a++)
	ary[a] = c;
return (ary);
}
