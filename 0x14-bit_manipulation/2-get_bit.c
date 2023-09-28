#include "main.h"
#include <stdio.h>
/**
 * get_bit - function that get the value of abit
 * @n: parameter number to be checked
 * @index: parameter index
 * Return: 0 or 1
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned int b;

if (index > sizeof(size_t) * 8)
	return (-1);

for (b = 0; b < index; b++)
	n = n >> 1;
return ((n & 1));
}
